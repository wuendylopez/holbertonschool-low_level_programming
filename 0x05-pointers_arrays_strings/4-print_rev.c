#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int num_char;
	int counter;

	for  (num_char = 0; s[num_char] != '\0';)
	{
		num_char++;
	}

	for (counter = num_char; counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}

	_putchar('\n');
}
