#include "search_algos.h"
/**
 * binary_search - searches for a val in a sorted arr with a Binary algo
 * @array: Array to search
 * @size: size of array
 * @value: Int to search in array
 * Return: the index where val is located
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_helper(array, 0, size - 1, value));
}
/**
 * binary_helper - Recursive seach function
 * @arr: Array to be searched
 * @lo: First positon of serched array
 * @hi: Last position of serched array
 * @val: Value to be serched in array
 * Return: Index where val is located
 */
int binary_helper(int *arr, size_t lo, size_t hi, int val)
{
	size_t mid = lo + (hi - lo) / 2;

	print_helper(arr, lo, hi);
	if (arr[mid] == val)
		return (mid);
	if (hi >= lo)
	{
		if (arr[mid] > val)
			return (binary_helper(arr, lo, mid - 1, val));
		return (binary_helper(arr, mid + 1, hi, val));
	}
	return (-1);
}
/**
 * print_helper - Prints the searched array
 * @arr: Array to be printed
 * @lo: First position of searched array
 * @hi: Last position of searched array
 * Return: Nothing
 */
void print_helper(int *arr, size_t lo, size_t hi)
{
	if (lo > hi)
	{
		return;
	}
	printf("Searching in array: ");
	if (lo == hi)
	{
		printf("%i", arr[hi]);
		printf("\n");
		return;
	}
	for ( ; lo <= hi; lo++)
	{
		printf("%i", arr[lo]);
		if (lo != hi)
			printf(", ");
	}
	printf("\n");
}
