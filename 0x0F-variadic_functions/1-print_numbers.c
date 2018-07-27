#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed
 * @n: number of integers
 * Return: nothing if success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		printf("%s%d", separator, va_arg(args, int));
	printf("\n");
	va_end(args);
}
