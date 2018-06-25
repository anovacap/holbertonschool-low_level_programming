#include "holberton.h"
/**
 * is_alpha - checks for alphabetic character
 * @c: the charcter to be checked
 *
 * Return: 1 if charcter is alphabetic, 0 if not
 */
int _isalpha(int c)
{
	int low;

	if (c > 64 && c < 91 && c > 96 && c < 123)
		low = 1;
	else
		low = 0;
	return (low);
}
