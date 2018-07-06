#include "holberton.h"
/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	int sign = 0;
	int num = 0;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			count++;
			if (count == 0)
				return (0);
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	if (sign % 2 == 0)
		sign = 1;
	else
		sign = -1;
	return (num * sign);
}
