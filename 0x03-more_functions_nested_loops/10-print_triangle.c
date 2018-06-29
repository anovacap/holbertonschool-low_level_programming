#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				if (column < size - row - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}
