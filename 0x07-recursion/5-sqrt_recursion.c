#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * square - squares integers
 * @n: square root number
 * @x: integer from _sqrt_recursion
 *
 * Return: integer
 */
int square(int x, int n);

int _sqrt_recursion(int n)
{
	return (square(1, n));

}
/**
 * square - squares integers
 * @x: integer from _sqrt_recursion
 * @n: square root number from _sqrt_recursion
 *
 * Return: squared number
 */
int square(int x, int n)
{
	if (x * x  == n)
		return (x);
	else if (x * x > n)
		return (-1);
	return (square(x + 1, n));
}
