#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 *
 * Return: Nothing
 */
int main(void)
{
	int counter;

	for (counter = 1; counter < 1025; counter++)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
		{
			printf("%i", counter);
			if (counter < 1023)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}
