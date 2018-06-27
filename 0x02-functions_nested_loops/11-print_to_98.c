#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: number
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%i", n);
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%i, ", n);
				n++;
			}
			else
			{
				printf("%i", n);
				break;
			}
		}
	} else
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%i, ", n);
				n--;
			}
			else
			{
				printf("%i", n);
				break;
			}
		}
	}
	printf("\n");
}
