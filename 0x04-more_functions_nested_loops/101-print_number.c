#include "main.h"

/**
 * print_number - prints an integer
 * Return: no value
 * @n: the integer
 */

void print_number(int n)
{
	unsigned int x, pos, count;

	if (n < 0)
	{
		_putchar(45);
		pos = n * -1;
	}
	else
	{
		pos = n;
	}
	x = pos;
	count = 1;
	while (x > 9)
	{
		x /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((pos / count) % 10) + 48);
	}
}
