#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: Determines how long the line will be
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		int space = 0;
		for (i = 1; i <= n; i++)
		{
			int j;
			for (j = 0; j < space; j++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			space++;
		}
	}
}
