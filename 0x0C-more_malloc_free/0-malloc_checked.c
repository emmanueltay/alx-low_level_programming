#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to be allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem_alloc;

	mem_alloc = malloc(b);

	if (mem_alloc == NULL)
		exit(98);
	return (mem_alloc);
}
