#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: dest string
 * @needle: source string
 *
 * Return: beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int k;
	int x = 0;
	int z;

	for (z = 0; needle[z] != '\0'; z++)
		if (needle[z] == 0)
			return (haystack);
	for (i = 0; i <= haystack[i] - z; i++)
	{
		for (k = 0; k - z; k++)
		{
			if (haystack[i + k] == needle[k])
				x = 1;
			else
			{
				x = 0;
				break;
			}
		}
		if (x == 1)
			return (haystack + i);
	}
	if (needle == NULL)
		return (haystack);
	return (NULL);
}
