#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string2
 *
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (accept[k] == s[i])
				break;
		}
		if (!accept[k])
			break;
	}
	return (i);
}
