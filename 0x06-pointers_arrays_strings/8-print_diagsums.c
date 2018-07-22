#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: first integer (row)
 * @size: second integer (column)
 * Return: nothing - output to screen
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i));
		sum2 += *(a + (i * size + size - i - 1));
	}
	printf("%i, %i\n", sum1, sum2);
}
