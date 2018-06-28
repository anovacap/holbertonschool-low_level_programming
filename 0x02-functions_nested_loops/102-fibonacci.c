#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: nothing
 */
int main(void)
{
	int counter;
	unsigned long fib;
	unsigned long first = 0;
	unsigned long second = 1;

	for (counter = 0; counter < 51; counter++)
	{
		fib = first + second;
		first = second;
		second = fib;
		printf("%lu", fib);
		if (counter < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
