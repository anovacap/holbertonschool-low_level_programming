#include "holberton.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string to be reversed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	int x;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (x = i - 1; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
