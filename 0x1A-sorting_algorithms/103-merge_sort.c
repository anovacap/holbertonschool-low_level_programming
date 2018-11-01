#include "sort.h"

/**
 * merge_sort - top down sort function
 * @array: The array to be sorted
 * @size: Number of elements in array
 * Return: Nothing
 */
void merge_sort(int *array, size_t size)
{
	int *out_arr = NULL;

	if (size < 2)
		return;
	out_arr = malloc(sizeof(int) * size);
	if (!out_arr)
		return;
	tp_dn_mrg_srt(array, out_arr, size);
	free(out_arr);
}

/**
 * tp_dn_mrg_srt - calls tp_dn_split merge, copy_array
 * @arr: input array
 * @out_arr: output array
 * @size: input array size
 * Return: Nothing
 */
void tp_dn_mrg_srt(int *arr, int *out_arr, size_t size)
{
	copy_array(arr, 0, size, out_arr);
	tp_dn_split_mrg(out_arr, 0, size, arr);
}

/**
 * tp_dn_split_mrg - splits array
 * @out_arr: output array
 * @strt: start index
 * @end: end index
 * @arr: input array
 * Return: Nothing
 */
void tp_dn_split_mrg(int *out_arr, size_t strt, size_t end, int *arr)
{
	size_t mid = 0;

	if (end - strt < 2)
		return;
	mid = (end + strt) / 2;
	tp_dn_split_mrg(arr, strt, mid, out_arr);
	tp_dn_split_mrg(arr, mid, end, out_arr);
	tp_dn_mrg(out_arr, strt, mid, end, arr);
}

/**
 * tp_dn_mrg - sort and merge
 * @arr: input array
 * @strt: index start
 * @mid: index middle
 * @end: end index
 * @out_arr: output array
 * Return: Nothing
 */
void tp_dn_mrg(int *arr, size_t strt, size_t mid, size_t end, int *out_arr)
{
	size_t i = strt, j = mid, k = 0;

	printf("Merging...\n");
	printf("[left]: ");
	for (i = strt; i < mid - 1; i++)
		printf("%d, ", arr[i]);
	printf("%d\n[right]: ", arr[i]);
	for (i = mid; i < end - 1; i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
	i = strt;
	for (k = strt; k < end; k++)
		if (i < mid && (j >= end || arr[i] <= arr[j]))
		{
			out_arr[k] = arr[i];
			i++;
		}
		else
		{
			out_arr[k] = arr[j];
			j++;
		}
	printf("[Done]: ");
	for (i = strt; i < end - 1; i++)
		printf("%d, ", out_arr[i]);
	printf("%d\n", out_arr[i]);
}

/**
 * copy_array - copy sorted values to out_arr
 * @arr: input array
 * @strt: start index
 * @end: end index
 * @out_arr: output array
 * Return: nothing
 */
void copy_array(int *arr, size_t strt, size_t end, int *out_arr)
{
	size_t k = 0;

	for (k = strt; k < end; k++)
		out_arr[k] = arr[k];
}
