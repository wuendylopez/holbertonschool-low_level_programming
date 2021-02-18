#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 * @str: pointer string
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	b = a / 2;

	if ((a % 2) == 1)
	{
		b++;
	}


	while (b < a)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
