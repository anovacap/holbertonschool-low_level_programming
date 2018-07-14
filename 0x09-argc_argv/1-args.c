#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	(void) *argv;
	for (i = 0; i < argc; i++)
		;
	printf("%d\n", i - 1);
	return (0);
}
