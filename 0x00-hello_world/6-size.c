#include <stdio.h>
/**
 * main - start of program
 * Return: nothing
 */
int main(void)
{
	printf("Size of a char: %i byte(s)", sizeof(char));
	printf("Size of an int: %i byte(s)", sizeof(int));
	printf("Size of a long int: %i byte(s)", sizeof(long));
	printf("Size of a long long int: %s byte(s)", sizeof(double));
	printf("Size of a float: %i byte(s)", sizeof(float));
	return (0);
}
