#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums of all its parameters
 * @n: number of parameters
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list my_parameters;
	unsigned int i;
	unsigned int sum = 0;

	va_start(my_parameters, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(my_parameters, int);

	va_end(my_parameters);
	return (sum);
}
