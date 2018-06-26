#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 *
 * Return: 1 or 0 if the character is lowercase or not
 */
int _islower(int c)
{
	int low;
	int num = c;

	if (num >= 'a' && num <= 'z')
	{
		low = 1;
	}
	else
	{
		low = 0;
	}
	return (low);
}
