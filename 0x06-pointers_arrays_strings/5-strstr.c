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
	int n, h;

	if (haystack == '\0')
		return ('\0');
	if (needle == '\0')
		return (haystack);
	for (h = 0; *(haystack) + h != '\0'; h++)
	{
		for (n = 0; *(needle) + n != '\0'; n++)
		{
			if (*(haystack + h + n) == *(needle + n))
				;
			else
				break;
		}
		if (*(needle + n) == '\0')
			return ((haystack + h));
	}
	return ('\0');
}
