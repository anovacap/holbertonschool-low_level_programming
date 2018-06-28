#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 *
 * Return: Nothing
 */
int main(void)
{
	int counter = 1;

	while (counter < 1024)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
			printf("%i, ", counter);
		counter++;
	}
	printf("\n");
	return (0);
}
