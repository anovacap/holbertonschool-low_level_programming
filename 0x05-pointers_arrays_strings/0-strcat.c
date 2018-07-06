#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	for (k = 0; dest[k] != '\0'; k++)
		;
	for (i = 0; src[i] != '\0'; i++)
		dest[k++] = src[i];
	dest[k] = '\0';
	printf("k = %i\n", k);
	printf("i = %i\n", i);
	printf("strlen(dest) = %lu\n", strlen(dest));
	return (dest);
}
