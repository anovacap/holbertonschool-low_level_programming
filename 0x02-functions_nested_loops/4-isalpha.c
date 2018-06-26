#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the charcter to be checked
 *
 * Return: 1 if charcter is alphabetic, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'A' && c < 'Z' && c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
