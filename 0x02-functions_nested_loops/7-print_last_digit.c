#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: number that is checked
 *
 * Return: the last digit
 */
int print_last_digit(int i)
{
	int digit;

	if (i < 0)
	{
		digit = i % 10;
		digit = digit * -1;
		_putchar(digit + '0');
	}
	else if (i > 0)
	{
		digit = i % 10;
		_putchar(digit + '0');
	}
	else
	{
		digit = i % 10;
		_putchar(digit + '0');
	}
	return (digit);
}
