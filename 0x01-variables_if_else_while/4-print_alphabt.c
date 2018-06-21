#include <stdio.h>

/**
 * main - start of program
 *
 * Return: nothing if successful
 */
int main(void)
{
	char c;

	for (c = 'a'; c < 'e'; c++)
		putchar(c);
	for (c = 'f'; c < 'q'; c++)
		putchar(c);
	for (c = 'r'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
