#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i, n, sign;

	for (i = 0; s[i] != '0'; i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (n = 0; s[n] >= '0' && s[i] <= '9'; n++)
		;
	return (sign * n);
}
