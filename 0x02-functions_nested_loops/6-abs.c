#include "holberton.h"
/**
 * _abs - computes absolute value of an integer
 * @i: the number to be computed
 *
 * Return: the absolute value of the integer
 */
int _abs(int i)
{
	int num;

	if (i < 0)
		num = i * -1;
	else if (i > 0)
		num = i;
	else
		num = 0;
	return (num);
}
