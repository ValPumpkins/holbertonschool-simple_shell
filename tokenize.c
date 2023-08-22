#include "main.h"

/**
* tokenize - Splits a string into tokens
* @input: The string to be split
* Return: An array of strings
*/
char **tokenize(char *input)
{
	char *token;
	char **args = NULL;
	int argCount = 0;

	args = calloc(10, sizeof(char *));

	if (args == NULL)
	{
		perror("Memory allocation failed");
		exit(1);
	}

	token = strtok(input, " \t\n");

	if (token == NULL)
	{
		free(args);
		return (NULL);
	}

	while (token != NULL)
	{
		args[argCount++] = token;
		token = strtok(NULL, " \t\n");
	}
	args[argCount] = NULL;

	return (args);
}
