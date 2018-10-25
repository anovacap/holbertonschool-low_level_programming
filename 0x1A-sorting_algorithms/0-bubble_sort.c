#include "sort.h"

/**
 * bubble_sort - sort algo
 * @array: array of ints
 * @size: size_t
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - 1; j++)
			if (array[j] > array[j + 1])
			{
				array[j] += array[j + 1];
				array[j + 1]  = array[j]  - array[j + 1];
				array[j] -= array[j + 1];
				print_array(array, size);
			}
}
