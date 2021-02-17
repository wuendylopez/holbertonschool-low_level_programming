#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: integer
 * @b: integer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int w;

	w = *a;
	*a = *b;
	*b = w;

}
