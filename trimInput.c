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
