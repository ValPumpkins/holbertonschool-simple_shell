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

	args = malloc(sizeof(char *) * 1024);

	if (args == NULL)
	{
		perror("Memory allocation failed");
		exit(1);
	}

	token = strtok(input, " \t\n");

	if (token == NULL)
		exit(EXIT_FAILURE);

	while (token != NULL)
	{
		args[argCount++] = token;
		token = strtok(NULL, " \t\n");
	}
	args[argCount] = NULL;

	free(token); // ajout pr test free valgrind
	return (args);
}
