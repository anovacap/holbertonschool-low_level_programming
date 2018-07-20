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
	int i, k;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
                ;
	ar = malloc(sizeof(int) * (i));
	if (ar == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ar[k] = min++;
	printf("min = %i\n", min);
	return (ar);
}
