#include <stdlib>
#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: number of characters
 * @c: the character
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
