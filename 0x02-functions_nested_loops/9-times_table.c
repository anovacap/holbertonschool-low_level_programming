#include "holberton.h"
/**
 * times_table prints 9 times table 0
 *
 * Return: Nothing if successful
 */
void times_table(void)
{
	int num_1;
	int num_2;
	int mult;
	int tens;
	int ones;

	for (num_1 = 0; num_1 < 10; num_1++)
	{
		for (num_2 = 0; num_2 < 10; num_2++)
		{
			mult = num_1 * num_2;
			tens = mult / 10;
			ones = mult % 10;
			if (mult == 0)
			{
				if (num_1 == 0 && num_2 > 0)
					_putchar (' ');
				_putchar (ones + '0');
				if (num_2 < 9)
				{
					_putchar (',');
					_putchar (' ');
				}
			}
			else if (mult < 10)
			{
				_putchar (' ');
				_putchar (ones + '0');
			}

			else if (tens < 10)
			{
				_putchar (tens + '0');
				_putchar (ones + '0');
			}
			if (num_2 < 9 && mult > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar ('\n');
       	}
}
