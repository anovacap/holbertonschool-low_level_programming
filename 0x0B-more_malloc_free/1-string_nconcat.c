#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: int length of string
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char
 * @src: char
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number to concate to
 * Return: concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int  s1len, s2len, s1ands2, i;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	s1ands2 = _strlen(s1) + _strlen(s2);
	s1len = _strlen(s1);
	s2len = _strlen(s2);

	if (n < s2len)
	{
		cat = malloc(sizeof(char) * (s1len) + n + 1);
		if (cat == NULL)
			return (NULL);
		_strcpy(cat, s1);
		for (i = 0; i < n; i++)
			cat[s1len++] = s2[i];
	}
	else
	{
		cat = malloc(sizeof(char) * (s1ands2) + 1);
		if (cat == NULL)
			return (NULL);
		_strcpy(cat, s1);
		for (i = 0; s1[i] != '\0'; i++)
			cat[s1len++] = s2[i];
	}
	cat[s1len++] = '\0';
	return (cat);
}
