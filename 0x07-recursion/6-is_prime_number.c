#include "holberton.h"

/**
 * primer - checks if n is prime
 * @n: number to check if prime
 * @x: number to check prime
 *
 * Return: 1 or 0
 */
int primer(int x, int n)
{
	if (n % x == 0 && x != n)
		return (0);
	else if (x == n)
		return (1);
	return (primer(x + 1, n));
}
/**
 * is_prime_number - 1 if the input integer is a prime number
 * primer - checks if n is prime
 * @n: number from is_prime_number
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (primer(2, n));
	else
		return (0);
}
