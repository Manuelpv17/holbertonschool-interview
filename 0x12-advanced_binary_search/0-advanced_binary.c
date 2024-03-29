#include "search_algos.h"

/**
 * print_array - Print array or subarray
 * @array: pointer to the first element of the array to search in
 * @min: start point of the array
 * @max: end point of array
 */
void print_array(int *array, int min, int max)
{
	int i;

	printf("Searching in array: ");
	for (i = min; i < max; i++)
		printf("%d, ", array[i]);
	printf("%d", array[i]);

	printf("\n");
}

/**
 * aux_recursion - aux_recursion
 * @array: pointer to the first element of the array to search in
 * @min: start point of the array
 * @max: end point of array
 * @value: value to search for
 * Return:  index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */
int aux_recursion(int *array, int min, int max, int value)
{
	if (max >= min)
	{
		int mid = min + (max - min) / 2;

		print_array(array, min, max);

		if (array[mid] == value)
		{
			if (array[mid - 1] == value)
				return (aux_recursion(array, min, mid, value));

			return (mid);
		}
		if (array[mid] >= value)
			return (aux_recursion(array, min, mid, value));
		return (aux_recursion(array, mid + 1, max, value));
	}

	return (-1);
}

/**
 * advanced_binary -  searches for a value in a
 * sorted array of integers.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return:  index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 * array will be sorted in ascending order
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (aux_recursion(array, 0, size - 1, value));
}
