#include "sort.h"

/**
 * heap_sort - sift-down heap sort
 * @array: input array
 * @size: number of elements in array
 * Return: Nothing
 */
void heap_sort(int *array, size_t size)
{
	size_t end = 0;

	if (size < 2)
		return;
	heapify(array, size);
	end = size - 1;
	while (end)
	{
		if (end)
		{
			array[0] += array[end];
			array[end] = array[0] - array[end];
			array[0] -= array[end];
			print_array(array, size);
		}
		end--;
		siftdown(array, 0, end, size);
	}
}

/**
 * heapify - creates the heap
 * @arr: the input array
 * @size: number of elements in array
 * Return: Nothing
 */
void heapify(int *arr, size_t size)
{
	ssize_t strt = 0;

	strt = (size - 2) / 2;
	while (strt >= 0)
	{
		siftdown(arr, (size_t)strt, size - 1, size);
		if (strt)
			strt--;
		else
			break;
	}
}

/**
 * siftdown - sorts array
 * @arr: the input array
 * @strt: index start
 * @end: index end
 * @size: number of elements in array
 * Return: Nothing
 */
void siftdown(int *arr, size_t strt, size_t end, size_t size)
{
	size_t root = 0, child = 0, swap = 0;

	root = strt;
	while (2 * root + 1 <= end)
	{
		child = 2 * root + 1;
		swap = root;
		if (arr[swap] < arr[child])
			swap = child;
		if (child + 1 <= end && arr[swap] < arr[child + 1])
			swap = child + 1;
		if (swap == root)
			return;
		else if (root != swap)
		{
			arr[root] += arr[swap];
			arr[swap] = arr[root] - arr[swap];
			arr[root] -= arr[swap];
			print_array(arr, size);
			root = swap;
		}
	}
}
