#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day 00:00-24:00
 *
 * Return: Nothing if successful
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
		for (j = 0; j < 60; j++)
		{
			_putchar (i / 10 + '0');
			_putchar (i % 10 + '0');
			_putchar (':');
			_putchar (j / 10 + '0');
			_putchar (j % 10 + '0');
			_putchar ('\n');
		}
}
