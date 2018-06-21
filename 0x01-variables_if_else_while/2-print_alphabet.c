#include <stdio.h>

/**
 * main - start of program
 *
 * Return: nothing if successful
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
