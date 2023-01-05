#include "main.h"

/**
 * sqrt_operation - finds the square root of a number
 * @n: the input integer
 * @i: the iterator
 * Return: the square root if it has a natural root
 * and -1 if otherwise
 */

int sqrt_operation(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + sqrt_operation(n, i + 1));
}


/**
 * _sqrt_recursion - finds the natural square root of an integer
 * @n: the integer
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_operation(n, 2));
}
