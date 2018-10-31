#include "sort.h"

/**
* getmax - gets the max integer in array
* @arr: array
* @size: size of the array
* Return: max integer from the array
*/
int getmax(int *arr, size_t size)
{
	size_t i = 0;
	int max = 0;

	max = arr[0];
	for (i = 1; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	return (max);
}

/**
 * haszero - finds if zero is in the array
 * @arr: array to search
 * @size: size of array
 * Return: 1 if array has zero, 0 if none
 */
int haszero(int *arr, size_t size)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
		if (arr[i] == 0)
			return (1);
	return (0);
}

/**
 * inc_array - increments array by ammount
 * @arr: array to be incremented
 * @size: size 0f array
 * @n: amount to increment
 * Return: 1 when done
 */
int inc_array(int *arr, size_t size, int n)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
		arr[i] += n;
	return (1);
}

/**
 * counting_sort - counting sort algo
 * @array: integer array
 * @size: size_t
 * Return: Nothing
 */
void counting_sort(int *array, size_t size)
{
	size_t csize = 0, i = 0;
	int max = 0, zero = 0, total = 0, oc = 0;
	int *count = NULL, *output = NULL;

	if (!array || size < 2)
		return;
	max = getmax(array, size);
	zero = haszero(array, size);
	if (zero)
		max += inc_array(array, size, 1);
	csize = (size_t)(max + 1);
	count = calloc(csize, sizeof(int));
	output = calloc(size, sizeof(int));
	if (output && count)
	{
		for (i = 0; i < size; i++)
			count[(size_t)array[i]] += 1;
		total = 0;
		for (i = 0; i < csize; i++)
		{
			oc = count[i];
			count[i] = total;
			total += oc;
		}
		for (i = 0; i < size; i++)
		{
			output[count[(size_t)array[i]]] = array[i];
			count[(size_t)array[i]]++;
		}
		for (i = 0; i < size; i++)
			array[i] = output[i];
		if (zero)
			inc_array(array, size, -1);
	}
	print_array(count, csize);
	free(output);
	free(count);
}
