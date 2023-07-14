#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: input size of memory need to be allocated
 * Return: pointer to the memory or status valule of 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *mem;
	unsigned int n;

	n = b;
	mem = malloc(n);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
