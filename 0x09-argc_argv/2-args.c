#include "holberton.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: arguments
 *
 * Return: integer (arguments to screen)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
