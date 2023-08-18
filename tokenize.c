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
	unsigned int argCount = 0;
	char *saveptr;

	args = malloc(sizeof(char *) * 1024);

	if (args == NULL)
	{
		perror("Memory allocation failed");
		exit(1);
	}

	token = strtok_r(input, " \t\n", &saveptr);

	if (token == NULL)
		exit(EXIT_FAILURE);

	while (token != NULL)
	{
		args[argCount] = strdup(token);
		if(args[argCount] == NULL)
		{
			perror("Memory allocation failed");
			exit(1);
		}
		argCount++;
		token = strtok_r(NULL, " \t\n", &saveptr);
	}
	args[argCount] = NULL;

	return (args);
}
