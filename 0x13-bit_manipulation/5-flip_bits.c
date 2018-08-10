#include "holberton.h"

/**
 * flip_bits - returns num of bits to flip to get from one num to another.
 * @n: number source
 * @m: number destination
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int count = 0;

	x = (n ^ m);
	while (x)
	{
		count += (x & 1);
		x >>= 1;
	}
	return (count);
}
