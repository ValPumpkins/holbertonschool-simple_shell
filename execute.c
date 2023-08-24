#include "main.h"

/**
* freeMemory - frees memory
* @args: arguments
* @path: path of command
* Return: void
*/
void freeMemory(char **args, char *path)
{
	free(args);
	free(path);
}

/**
* execute - Executes a command
* @input: Input to be executed
* Return: 1 on success, -1 on failure
*/
int execute(char *input)
{
	int status, exe;
	char *path, **args;
	pid_t pid;

	args = tokenize(input);
	if (args == NULL)
		return (-1);
	if (input[0] == '/' || input[0] == '.')
		path = strdup(input);
	else
		path = getEnv(args[0]);
	if (path == NULL)
	{
		free(args);
		return (-1);
	}
	pid = fork();
	if (pid < 0)
	{
		freeMemory(args, path);
		return (-1);
	}
	else if (pid == 0)
	{
		exe = execve(path, args, environ);
		if (exe < 0)
		{
			freeMemory(args, path);
			return (-1);
		}
		exit(1);
	}
	else
	{
		wait(&status);
		freeMemory(args, path);
	}
	return (1);
}
