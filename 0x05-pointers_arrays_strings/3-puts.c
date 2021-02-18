#include "holberton.h"

/**
 * _puts - function that prints a string
 * @str: string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	char *ptr;

	for  (ptr = str; *ptr != '\0'; ptr++)
	{
		_putchar(*ptr);
	}

	_putchar('\n');
}
