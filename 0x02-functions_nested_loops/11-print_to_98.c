#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -prints integers from the input integer to 98
 * @n: is the integer
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
