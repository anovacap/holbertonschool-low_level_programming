#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: takes an alphabetic character
 *
 * Return: 1 if uppercase 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
