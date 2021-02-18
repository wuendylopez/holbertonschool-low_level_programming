#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer
 * @n: integer
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int num;

	for  (num = 0; num < n; num++)
	{
		printf("%d", a[num]);

		if (num != (n - 1))
		{
			printf(", ");
		}
	}

	putchar('\n');
}
