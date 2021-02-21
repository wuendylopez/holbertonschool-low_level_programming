#include "holberton.h"
/**
 * _strncpy - Function that copies a string.
 * @dest: Destiny String.
 * @src: Source string.
 * @n: Number of bits to copy.
 *
 * Return: dest, String copied.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
