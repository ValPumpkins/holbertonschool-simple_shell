#include "main.h"

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
	if (input[0] == '/' || (input[0] == '.' && input[1] == '/'))
		path = strdup(input);
	else
		path = getEnv(args[0]);
	if (path == NULL || args == NULL)
	{
		free(args);
		return (-1);
	}
	pid = fork();
	if (pid < 0)
	{
		free(args);
		free(path);
		return (-1);
	}
	else if (pid == 0)
	{
		exe = execve(path, args, environ);
		if (exe < 0)
		{
			free(args);
			free(path);
			return (-1);
		}
		exit(1);
	}
	else
	{
		wait(&status);
		free(args);
		free(path);
	}
	return (1);
}
