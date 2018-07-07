#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to change
 *
 * Return: char
 */
char *rot13(char *s)
{
	int i;
	int j;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; rot1[j] != '\0'; j++)
			if (s[i] == rot1[j])
			{
				s[i] = rot2[j];
				break;
			}
	}
	return (s);
}
