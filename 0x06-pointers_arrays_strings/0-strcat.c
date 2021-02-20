#include "holberton.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: concatenate string
 * @src: source to join with dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; src[j]; j++)
	{
		dest[j + i] = src[j];
	}

	return (dest);
}
