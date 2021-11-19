#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

void print_array(const int *array, size_t size);
void counting_sort_radix(int *array, size_t size, long int e);
void radix_sort(int *array, size_t size);

#endif
