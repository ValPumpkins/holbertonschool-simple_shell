#include "main.h"

/**
* getEnv - get the path of an executable
* @input: input string
* Return: path of the executable
*/
char *getEnv(char *input)
{
	char **args;
	char *filename, *pathEnv, *pathCopy, *token, *result;

	args = tokenize(input);

	filename = args[0];
	pathEnv = getenv("PATH");

	if  (pathEnv == NULL)
	{
		fprintf(stderr, "PATH not set\n");
		free(args);
		return (NULL);
	}
	pathCopy = strdup(pathEnv);
	token = strtok(pathCopy, ":");

	while (token)
	{
		char fullPath [1024];

		snprintf(fullPath, sizeof(fullPath), "%s/%s", token, filename);

		if (access(fullPath, F_OK | X_OK) == 0)
		{
			result = strdup(fullPath);
			free(pathCopy);
			free(args);
			return (result);
		}
		token = strtok(NULL, ":");
	}
	free(pathCopy);
	free(args);

	return (NULL);
}
