#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: char pointer to be changed
 * @to: char pointer changing char
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
