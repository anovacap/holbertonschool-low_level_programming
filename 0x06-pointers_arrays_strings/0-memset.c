#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: char array to be updated
 * @b: char goes to s
 * @n: unsigned int times s updated
 *
 * Return: updated s char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
