#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check
 * @index: place of number to check
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n = n >> index;
	return (n & 1);
}
