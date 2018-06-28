#include <stdio.h>

/**
 * main - prints the numbers 1 to 100 mult 3 fizz mult 5 buzz
 *
 * Return: nothing if successful
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", i);
	}
	printf("\n");
	return (0);
}
