#include "main.h"

/**
* execute - Executes a command
* @input: Input to be executed
* Return: 1 on success, -1 on failure
*/
int execute(char *input)
{
	int status, exe;
	char **args;

	pid_t pid = fork();

	args = tokenize(input);

	if (args[0] == NULL)
	{
		fprintf(stderr, "No command\n");
		free(args);
		return (-1);
	}
	if (access(args[0], F_OK | X_OK) == -1)
	{
		perror(args[0]);
		free(args);
		return (-1);
	}
	if (pid < 0)
	{
		perror("Fork failed");
		free(args);
		exit(1);
	}
	else if (pid == 0)
	{
		exe = execve(args[0], args, environ);
		if (exe < 0)
		{
			perror(args[0]);
			free(args);
			exit(1);
		}
	}
	else
		wait(&status);

	free(args);
	return (1);
}
