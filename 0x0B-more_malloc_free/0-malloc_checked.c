#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int size of malloc
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		return (NULL);
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
