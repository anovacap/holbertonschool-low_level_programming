#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: int1
 * @n: int2
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int j;
	int i = 0;
	int k;
	int temp;

	k = n / 2;
	i = n - 1;
	for (j = 0; j < k; j++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		i--;
	}
}
