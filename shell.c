#include "main.h"

/**
* trimInput - trim leading and trailing whitespace
* @input: input string
* Return: trimmed string
*/
char *trimInput(char *input)
{
	char *trimmedInput = input;

	while (*trimmedInput == ' ' || *trimmedInput == '\t')
		trimmedInput++;

	if (*trimmedInput == '\n' || *trimmedInput == '\0')
		return (NULL);

	return (trimmedInput);
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char *line = NULL, *trimmedInput = NULL;
	int exe;
	size_t len = 0;
	ssize_t readChars;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("Shell 🎈 ");

		readChars = getline(&line, &len, stdin);
		if (readChars == -1)
			break;

		trimmedInput = trimInput(line);

		if (trimmedInput == NULL)
			continue;
		exe = execute(line);
		if (exe == -1)
			perror("error");
	}
	free(line);
	return (0);
}
