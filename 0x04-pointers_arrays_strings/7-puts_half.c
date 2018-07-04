#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int l;

	for (i = 0; str[i] != 0; i++)
		;
	if (i % 2 == 0)
	{
		for (l = i / 2; l < i; l++)
			_putchar(str[l]);
	}
	else
		for (l = (i + 1) / 2; l < i; l++)
			_putchar(str[l]);
	_putchar('\n');
}
