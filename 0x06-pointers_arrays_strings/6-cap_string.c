#include "holberton.h"
/**
 * toUpper - prints a string, in reverse,
 *             followed by a new line
 * @string: pointer type char
 * Return: Always 0 (Success)
 */
void toUpper(char *string)
{
	if (*string >= 'a' && *string <= 'z')
		*string -= 32;
}
/**
 * include - prints a string, in reverse,
 *             followed by a new line
 * @string: pointer type char
 * Return: Always 0 (Success)
 */
int include(char *string)
{
	char *separators = " \t\n,;.!?\"(){}";

	for (; *separators != '\0'; separators++)
		if (*separators == *string)
			return (1);
	return (0);
}
