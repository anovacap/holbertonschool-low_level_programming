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
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count integer
 * @av: argument value array
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	int x = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		len += _strlen(av[i]);
	}
	len = len + ac;
	ptr = malloc(sizeof(char *) + len +1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			ptr[x] = av[i][j];
			x++;
		}
		ptr[x] = '\n';
		x++;
	}
	printf("x = %i\n", x);
	printf("len = %i\n", len);
	printf("i = %i\n", i);
	printf("j = %i\n", j);
	ptr[x] = '\0';
	return (ptr);
}
