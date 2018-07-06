#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: string1
 * @src: string2
 * @n: int
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, k;

	for (k = 0; dest[k] != '\0'; k++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
