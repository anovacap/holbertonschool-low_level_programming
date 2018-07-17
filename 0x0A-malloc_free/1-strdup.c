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

	dup = malloc(sizeof(*dup * size));
	if (sizeof(dup) == 0)
		return (NULL);
	for (i = 0; i <= size; i++)
		dup[i] = str[i];
	return (dup);
}
