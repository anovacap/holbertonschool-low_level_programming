#include "holberton.h"
/**
 * is_lower - checks for lowercase character
 * @c: the character to be checked
 *
 * Return: 1 or 0 if the character is lowercase or not
 */
int _islower(int c)
{
	int low;

	if (c > 96 && c < 123)
		low = 1;
	else
		low = 0;
	return (low);
}
