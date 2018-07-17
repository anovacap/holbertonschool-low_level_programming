#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char *str_concat(char *s1, char *s2)
{
	char *cat = NULL;
	int i;
	int s1len = _strlen(s1);
	int s2len = _strlen(s2);
	int s1ands2 = s1len + s2len;

	if (s1 != NULL && s2 != NULL)
		cat = malloc(sizeof(char) * s1ands2  + 1);
	if (s1 == NULL)
		return (_strcpy(cat, s2));
	else if (s2 == NULL)
		return (_strcpy(cat, s1));
	else
	{
		_strcpy(cat, s1);
		for (i = 0; s2[i] != '\0'; i++)
			cat[s1len++] = s2[i];
		return(cat);
	}
}
