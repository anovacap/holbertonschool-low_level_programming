#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: type arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	int x = 0;
	va_list args;
	char *st;

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			st = va_arg(args, char*);

			if (st == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", st);
			break;
		default:
			x++;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		     || format[i] == 's') && (i < strlen(format) - x))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
