#include "main.h"

/**
 * print_square - Prints a square
 * @size: Dimensions of square
 */
void print_square(int size)
{
	int n, l;

	if (size <= 0)
		_putchar('\n');
	for (n = 0; n < size; n++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
