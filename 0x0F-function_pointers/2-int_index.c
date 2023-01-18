#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: array from which an integer is to be found
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element
 * for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool y;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			y = cmp(array[i]);
			if (y == TRUE)
				return (i);
		}
	}
	return (-1);
}
