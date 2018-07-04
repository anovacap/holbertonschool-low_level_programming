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
	int k;

	for (i = 0; str[i] != 0; i++)
		;
	if (i % 2 != 0)
		k = (i + 1) / 2;
	else
		k = i / 2;
	for (i = 0; i < k; i++)
		_putchar(str[k + i]);
	_putchar('\n');
}
