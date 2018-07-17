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
	int k = 0;

	for (k = 0; str[k] != '\0'; k++)
		;
	if (k == 0)
		return (NULL);
	dup = (char *)malloc(sizeof((*dup) * k) + 1);
	if (dup == 0)
		return (NULL);
	for (i = 0; i <= k; i++)
		dup[i] = str[i];
	return (dup);
}
