#ifndef _SORT_H_
#define _SORT_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void free_listint2(listint_t **head);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void _qsort(int *arr, ssize_t f, ssize_t l, size_t size);
ssize_t _partition(int *arr, ssize_t f, ssize_t l, size_t size);
void shell_sort(int *array, size_t size);
size_t n_gap(size_t n);
size_t p_gap(size_t n);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
int getmax(int *arr, size_t size);
int haszero(int *arr, size_t size);
int inc_array(int *arr, size_t size, int n);
void merge_sort(int *array, size_t size);
void tp_dn_mrg_srt(int *arr, int *out_arr, size_t n);
void tp_dn_split_mrg(int *out_arr, size_t strt, size_t end, int *arr);
void tp_dn_mrg(int *arr, size_t strt, size_t mid, size_t end, int *out_arr);
void copy_array(int *arr, size_t strt, size_t end, int *out_arr);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
#endif
