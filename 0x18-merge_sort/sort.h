#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

void top_down_merge(int *array, int *copy, size_t low, size_t high);
void print_array(const int *array, size_t size);
void merge_sort(int *array, size_t size);

#endif
