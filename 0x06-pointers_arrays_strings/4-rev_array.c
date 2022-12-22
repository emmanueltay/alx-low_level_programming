#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array pointer
 * @n: length of array
 * Return: no value
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	int half;

	for (half = n / 2; half > 0; half--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
