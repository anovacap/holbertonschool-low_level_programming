#include "sort.h"

/**
 * quick_sort - quick sort algo
 * @array: integer array
 * @size: size_t
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1, size);
}

/**
 * _qsort - sorts array
 * @arr: array to sort
 * @f: the first index position
 * @l: the last index postion
 * @size: size
 * Return: Nothing
 */
void _qsort(int *arr, ssize_t f, ssize_t l, size_t size)
{
	ssize_t p = 0;

	if (f < l)
	{
		p = _partition(arr, f, l, size);
		_qsort(arr, f, p - 1, size);
		_qsort(arr, p + 1, l, size);
	}
}

/**
 * _partition - partitions the array
 * @arr: array to sort
 * @f: the first index position
 * @l: the last index postion
 * @size: size
 * Return: partition index
 */
ssize_t _partition(int *arr, ssize_t f, ssize_t l, size_t size)
{
	ssize_t i = 0, j = 0;
	int pivot = arr[l];

	i = f;
	for (j = f; j < l; j++)
	{
		if (arr[j] < pivot)
		{
			if (i != j)
			{
				arr[j] += arr[i];
				arr[i] = arr[j] - arr[i];
				arr[j] -= arr[i];
				print_array(arr, size);
			}
			i++;
		}
	}
	if (i != l)
	{
		arr[i] += arr[l];
		arr[l] = arr[i] - arr[l];
		arr[i] -= arr[l];
		print_array(arr, size);
	}
	return (i);
}
