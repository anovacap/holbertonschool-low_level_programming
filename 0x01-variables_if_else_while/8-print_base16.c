#include <stdio.h>
/**
 * main - starts the program
 *
 * Return: nothing if successful
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
		putchar (i + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
