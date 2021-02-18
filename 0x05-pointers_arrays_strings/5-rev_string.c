#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int num_char = 0;
	int i = 0;
	char sub;

	while  (s[num_char] != '\0')
	{
		num_char++;
	}

	for (; i < (num_char / 2); i++)
	{
		sub = s[i];
		s[i] = s[num_char - i -1];
		s[num_char - i - 1] = sub;
	}
}
