#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: integer
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int srccnt, destcnt;

	for (destcnt = 0; dest[destcnt] != '\0'; destcnt++)
		;
	for (srccnt = 0; srccnt < n && src[srccnt] != '\0'; srccnt++)
		dest[destcnt++] = src[srccnt];
	dest[destcnt] = '\0';
	return (dest);
}
