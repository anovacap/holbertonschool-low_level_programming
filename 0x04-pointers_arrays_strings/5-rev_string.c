#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int j;
	int k;
	int temp;

	for (i = 0; s[i] != '\0'; i++)
		;
	k = i / 2;
	i = i -1;
	for (j = 0; j <= k; j++)
	{
		temp = s[j];
		s[j] = s[i - 1];
		s[i] = temp;
		i--;
	}
}
