#include "holberton.h"
/**
 * reverse_array - function reverses the content array
 * @a: Target Array.
 * @n: Size of Array.
 */
void reverse_array(int *a, int n)
{
	int w, i;
	int *l;

	l  = &a[n - 1];
	for (i = 0; i < (n / 2); i++)
	{
		w = a[i];
		a[i] = *l;
		*l = w;
		l--;
	}
}
