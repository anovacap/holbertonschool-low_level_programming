#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars, initializes it with a specific char
 * @size: size in bytes for char c
 * @c: character
 * Return: O
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
