#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_helper(int *arr, size_t lo, size_t hi, int val);
void print_helper(int *arr, size_t lo, size_t hi);
#endif
