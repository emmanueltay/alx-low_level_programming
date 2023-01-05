#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the integer
 * Return: The factorial value
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}