#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: arguments
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
				{
				    printf("Error\n");
				    return (1);
				}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
