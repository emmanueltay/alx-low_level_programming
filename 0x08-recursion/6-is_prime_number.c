#include "main.h"

/**
 * prime_num_check - detects if an input number is a prime number
 * @n: input number
 * @c: iterator
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */

int prime_num_check(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime_num_check(n, c + 1));
}


/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the integer
 * Return: 1 if the number is a prime number
 * and 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_num_check(n, 2));
}
