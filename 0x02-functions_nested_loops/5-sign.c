#include "main.h"
/**
 * print_sign - checks whether a number is positive or negative or zero
 * @n: is the number which is been checked
 * Return: 1 when the number is positive,-1 when the number is negative
 * and 0 when the number is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
