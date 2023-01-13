#include "main.h"
#include <stdlib.h>

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
}
