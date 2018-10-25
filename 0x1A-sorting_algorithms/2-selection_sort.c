#include "sort.h"

/**
 * selection_sort - selection sort algo
 * @array: integer array
 * @size: size_t
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, mi;
	int min;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		mi = i;
		for (j = i; j < size; j++)
			if (array[j] < min)
			{
				min = array[j];
				mi = j;
			}
		if (i != mi)
		{
			array[i] += array[mi];
			array[mi] = array[i] - array[mi];
			array[i] -= array[mi];
			print_array(array, size);
		}
	}
}
