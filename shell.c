#include "main.h"

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	char *line = NULL, *fullPath;
	int exe;
	size_t len = 0;
	ssize_t readChars;
	(void)argc;

	while (1)
	{
		fflush(stdout);

		readChars = getline(&line, &len, stdin);
		if (readChars == -1)
			break;
		if (*line == '\n')
			continue;
		line[strlen(line) - 1] = '\0';

		if (line[0] == '/')
		{
			exe = execute(line);
			if (exe == -1)
				perror(argv[0]);
		}
		else
		{
			fullPath = getEnv(line);
			if (fullPath == NULL)
			{
				perror(argv[0]);
				continue;
			}
			exe = execute(fullPath);
			if (exe == -1)
				perror(argv[0]);
			free(fullPath);
		}
	}
	free(line);
	return (0);
}
