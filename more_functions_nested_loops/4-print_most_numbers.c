#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int v;

	for (v = 0; v < 10; v++)
		if (v != 2 && v != 4)
			_putchar(v + '0');
	_putchar('\n');
}
