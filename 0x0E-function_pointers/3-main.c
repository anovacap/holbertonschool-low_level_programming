#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - command line calculator
 * @argc: number of command line arguments
 * @argv: argument values
 * Return: operator (a b) value
 */
int main(int argc, char **argv)
{
	int d;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	d = (get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3])));
	printf("%d\n", d);
	return (0);
}
