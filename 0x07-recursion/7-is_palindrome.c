#include "holberton.h"

/**
 * _strlen_recursion - gets length of string
 * @s: string
 * Return: length integer
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return ((1) + _strlen_recursion(s + 1));
	return (0);
}
/**
 * palin - find a palindrome
 * @s: string
 * @x: incrementing integer
 * @length: length og string
 * Return: 1 if palin 0 if not
 */
int palin(char *s, int x, int length)
{
	if (x >= length)
		return (1);
	if (s[x] != s[length])
		return (0);
	return (palin(s, x + 1, length - 1));
}
/**
 * is_palindrome - 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 or 0 if prime or not
 */
int is_palindrome(char *s)
{
	return (palin(s, 0, _strlen_recursion(s) - 1));
}
