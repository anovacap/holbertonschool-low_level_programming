#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: duplcate string or NULL
 */
char *_strdup(char *str)
{
	char *dup;
	int i;
	int size = sizeof(str);

	if (size == 0)
		return (NULL);
	dup = malloc(sizeof(*dup * size) + 1);
	if (sizeof(dup) == 0)
		return (NULL);
	for (i = 0; i <= size; i++)
		dup[i] = str[i];
	return (dup);
}
