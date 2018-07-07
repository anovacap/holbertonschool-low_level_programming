#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be changed
 *
 * Return: char
 */
char *leet(char *s)
{
	int i;
	int j;
	char alph[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alph[j] != '\0'; j++)
			if (s[i] == alph[j])
				s[i] = leet[j];
	}
	return (s);
}
