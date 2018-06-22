#include <stdio.h>
/**
 * main - start of the program
 *
 * Return: nothing if successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar (i + '0');
	putchar('\n');
	return (0);
}
