#include "main.h"
#include <stdlib.h>

/**
 * mem_fill - fills the memory with a constant byte
 * @ptr: pointer the indicates which memory block
 * to be filled
 * @b: character to fill memory
 * @n: number of bytes to be filled
 * Return: a pointer to filled memory block
 */

char *mem_fill(char *ptr, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		ptr[i] = b;
	return (ptr);
}


/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: bytes of each element
 * Return: NULL when malloc fails or size or nmemb is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_space;

	mem_space = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (mem_space == NULL)
		return (NULL);
	mem_fill(mem_space, 0, nmemb * size)
		
		return (mem_space);
}
