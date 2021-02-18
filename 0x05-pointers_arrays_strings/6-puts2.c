#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer string
 *
 * Return: Alaways 0.
 */
void puts2(char *str)
{
	int w;

	for (w = 0; w < 5; w++)
	{
		_putchar(str[w * 2]);
	}
	_putchar('\n');
}
