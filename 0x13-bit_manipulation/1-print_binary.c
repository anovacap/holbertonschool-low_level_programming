#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int x;
	unsigned long int k = n;

	if (n < 2)
	{
		_putchar((n & 1) + '0');
		return;
	}
	while (k > 0)
	{
		k = k >> 1;
		i++;
	}
	while (i > 0)
	{
		i--;
		x = n >> i;
		_putchar((x & 1) + '0');
	}
}
