#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer start range
 * @max: integer end range
 * Return: pointer to new array or NULL
 */
int *array_range(int min, int max)
{
	int *ar = NULL;
	int i;
	int size = max - min;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * (size) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		ar[i] = min++;
	return (ar);
}
