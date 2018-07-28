#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed
 * @n: number of strings passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			char *str = va_arg(args, char*);

			if (str)
				printf("%s", str);
			else
				printf("(nil)");
			if (separator && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
