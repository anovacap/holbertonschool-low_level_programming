#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - ocates a character in a string
 * @s: string to be searched
 * @c: sting
 *
 * Return: string or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
