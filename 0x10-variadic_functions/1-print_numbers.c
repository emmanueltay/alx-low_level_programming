#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed after each number
 * @n: number of number elements to be printed
 * Return: no value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_parameters;

	va_start(my_parameters, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_parameters, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(my_parameters);
	printf("\n");
}
