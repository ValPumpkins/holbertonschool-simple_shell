#include "main.h"

/**
* getEnv - get the path of an executable
* @input: input string
* Return: path of the executable
*/
char *getEnv(char *input)
{
	char *pathEnv, *pathCopy, *token, *result;
	char fullPath[1024];

	pathEnv = getenv("PATH");

	if  (pathEnv == NULL)
		return (NULL);

	pathCopy = strdup(pathEnv);
	token = strtok(pathCopy, ":");

	while (token)
	{
		snprintf(fullPath, sizeof(fullPath), "%s/%s", token, input);

		if (access(fullPath, F_OK | X_OK) == 0)
		{
			result = strdup(fullPath);
			free(pathCopy);
			return (result);
		}
		token = strtok(NULL, ":");
	}
	free(pathCopy);

	return (NULL);
}
