#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number given
 * @index: bit to be changed
 * Return: 1 or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (*n < 2)
	{
		*n = 0;
		return (1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
