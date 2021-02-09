#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		_putchar(character);
	_putchar('\n');
}

