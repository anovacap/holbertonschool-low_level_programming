#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - given as a parameter on each element of an array
 * @array: an array of numbers pass to function
 * @size: size of array
 * @action: function takes address of a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
