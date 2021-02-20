#include "holberton.h"

/**
 * _strcat - function that concatenates two strings eith n
 * @dest: concatenate string
 * @src: source to join with dest
 * @n: bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; j < n && src[j]; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
