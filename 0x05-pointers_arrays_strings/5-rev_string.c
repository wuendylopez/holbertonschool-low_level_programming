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

	num_char--;

	for (; i < (num_char / 2); i++)
	{
		sub = s[i];
		s[i] = s[num_char - i];
		s[num_char - i] = sub;
	}
}
