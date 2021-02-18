#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @des: pointer
 * @src: pointer
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	init w, v;

	for (v = 0; src[v] != '\0'; v++)

	for  (w = 0; w <= v ; w++)
	{
		dest[w] = *(src +w);
	}

	return (dest);
}
