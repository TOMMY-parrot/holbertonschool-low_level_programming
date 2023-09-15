#include "search_algorithms.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements
 * @value: value to search for
 *
 * Return: first index where value is located or -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}