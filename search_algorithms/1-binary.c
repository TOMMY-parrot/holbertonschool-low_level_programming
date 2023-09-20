#include "search_algos.h"

/**
 * binary_search - searches for a value 
 * @array: pointer to the first element of the array to search in
 * @size: number of elements
 * @value: value to search for
 *
 * Return: index where value is located or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t minimum, maximum;
	int between;

	if (array == NULL)
		return (-1);

	minimum = 0;
	maximum = size - 1;

	while (minimum <= maximum)
	{
		between = (minimum + maximum) / 2;
		print_array(array, minimum, maximum);

		if (array[between] == value)
			return (between);

		if (array[between] < value)
			minimum = between + 1;

		else
			maximum = between - 1;
	}
	return (-1);
}

/**
 * print_array - prints an array
 * @array: array to print
 * @start: index where array starts
 * @end: index where array ends
 *
 * Return: void
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t idx;

	printf("Searching in array: ");
	for (idx = start; idx < end; idx++)
	{
		printf("%d, ", array[idx]);
	}
	printf("%d\n", array[end]);
}
