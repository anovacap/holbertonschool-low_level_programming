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

	for (i = 0; haystack[i] != '\0'; i++)
		if (haystack[i] == needle[0])
			for (k = 0; needle[k] != '\0'; k++)
				if (haystack[i + k] == needle[k])
					return (needle);
		return (NULL);
}
