#include "variadic_functions.h"
#include <stdio.h>

/**
* sum_them_all - sum of all its parameters
* @n: number of parameters
* Return: sum or nothing
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
