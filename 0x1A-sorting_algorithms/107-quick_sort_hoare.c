#include "sort.h"

/**
 * quick_sort_hoare - hoare partition scheme
 * @array: input array
 * @size: size of array
 * Return: nothing
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (size < 2)
		return;
	_qsort(array, 0, size - 1, size);
}

/**
 * _qsort_hp - sorts array
 * @arr: array to sort
 * @f: the first index position
 * @l: the last index postion
 * @size: size
 * Return: Nothing
 */
void _qsort_hp(int *arr, ssize_t f, ssize_t l, size_t size)
{
	ssize_t p = 0;

	if (f < l)
	{
		p = _partition(arr, f, l, size);
		_qsort(arr, f, p, size);
		_qsort(arr, p + 1, l, size);
	}
}

/**
 * h_partition - partitions the array
 * @arr: array to sort
 * @f: the first index position
 * @l: the last index postion
 * @size: size
 * Return: partition index
 */
ssize_t h_partition(int *arr, ssize_t f, ssize_t l, size_t size)
{
	ssize_t i = 0, j = 0;
	int pivot = arr[f];

	j = l;
	i = f;
	while (1)
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i < j)
		{
			arr[i] += arr[j];
			arr[j] = arr[i] - arr[j];
			arr[i] -= arr[j];
			print_array(arr, size);
		}
		else
			return (j);
	}
}
