#include <stddef.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to the function you need to use
 * Return: no value
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int position;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (position = 0; position < size; position++)
			action(array[position]);
	}
}
