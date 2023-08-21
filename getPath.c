#include "main.h"

/**
* getPath - get the path of a command
* @input: command
* @args: arguments
* Return: path
*/
char *getPath(char *input, char **args)
{
	char *path;

	if (input[0] == '/')
		path = strdup(input);
	else
		path = getEnv(args[0]);

	return (path);
}
