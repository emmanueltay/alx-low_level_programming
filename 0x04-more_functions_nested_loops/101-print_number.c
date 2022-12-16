#include "main.h"

/**
 * print_number - prints an integer
 * Return: no value
 * @n: the integer
 */

void print_number(int n)
{
	unsigned int pos, count;

	if (n < 0)
	{
		_putchar('-');
		pos = n * -1;
	}
	else
	{
		pos = n;
	}
	count = 1;
	while (pos > 9)
	{
		pos /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((pos / count) % 10) + '0');
	}
}
