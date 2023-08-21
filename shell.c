#include "main.h"

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	char *input = NULL, *trimmedInput = NULL;
	int exe;
	size_t len = 0;
	ssize_t readChars;

	if (argc != 1)
	{
		printf("Usage: %s\n", argv[0]);
		return (EXIT_FAILURE);
	}

	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("Shell 🎈 ");

		readChars = getline(&input, &len, stdin);
		if (readChars == -1)
			break;

		trimmedInput = trimInput(input);

		if (trimmedInput == NULL)
			continue;

		if (strcmp(trimmedInput, "exit\n") == 0)
			break;

		exe = execute(trimmedInput);

		if (exe == -1)
			perror(argv[0]);
	}
	free(input);

	return (0);
}
