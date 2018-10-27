#include "sort.h"

/**
 * shell_sort - shell sort algo
 * @array: integer array
 * @size: size_t type
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i = 0, j = 0;
	int t = 0;

	while (gap < size)
		gap = n_gap(gap);
	gap = p_gap(gap);
	for (; gap > 0; gap = p_gap(gap))
	{
		for (i = gap; i < size; i++)
		{
			t = array[i];
			for (j = i; j > gap && array[j -gap] > t; j -= gap)
				array[j] = array[j -gap];
			array[j] = t;
		}
		print_array(array, size);
	}
}

/**
 * n_gap - next gap interval
 * @n: the prevoius gap interval
 * Return: Next gap interval
 */
size_t n_gap(size_t n)
{
	return (n * 3 + 1);
}

/**
 * p_gap - prevoius gap interval
 * @n: the next gap interval
 * Return: previous gap interval
 */
size_t p_gap(size_t n)
{
        return ((n - 1) / 3);
}
