#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}
