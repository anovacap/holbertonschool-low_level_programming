#include "holberton.h"

/**
 * get_endianness - hecks the endianness.
 * Return: 0 if big or 1 if little
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *s = (char *)&k;

	if (*s)
		return (1);
	else
		return (0);
}
