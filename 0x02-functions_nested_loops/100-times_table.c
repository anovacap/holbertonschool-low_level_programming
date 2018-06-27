#include "holberton.h"

/**
 * print_times_table - print n times table starting at 0
 * @n: takes number between 0 and 15
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int column;
	int row;
	int hundreds;
	int tens;
	int ones;
	int mult;

	if (n > 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (column = 1; column <= n; column++)
			{
				mult = column * row;
				hundreds = mult / 100;
				tens = ((mult / 10) % 10);
				ones = mult % 10;
				_putchar (',');
				_putchar (' ');
				if (mult < 10)
				{
					_putchar (' ');
					_putchar (' ');
					_putchar (ones + '0');
				}
				else if (mult > 9 && mult < 100)
				{
					_putchar (' ');
					_putchar (tens + '0');
					_putchar (ones + '0');
				}
				else if (mult > 99)
				{
					_putchar (hundreds + '0');
					_putchar (tens + '0');
					_putchar (ones + '0');
				}
			}
			_putchar ('\n');
		}
	}
}
