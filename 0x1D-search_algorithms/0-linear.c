#include "search_algos.h"
/**
 * linear_search - Searches for a val in an array of ints with a Linear algo
 * @array: Array to search
 * @size: Size of array
 * @value: Int to search in array
 * Return: The first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (!array)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%i]\n", x, array[x]);
		if (array[x] == value)
			return (array[x]);
	}
	return (-1);
}
