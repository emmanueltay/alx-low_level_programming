#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: no value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list my_parameters;

	va_start(my_parameters, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(my_parameters, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(my_parameters);
	printf("\n");
}
