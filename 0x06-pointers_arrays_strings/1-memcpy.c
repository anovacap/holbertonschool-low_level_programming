#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: char to receive copy
 * @src: char to be copied to dest
 * @n: unsigned int bytes of src
 * Return: char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = src[i];
	return (dest);
}
