#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	long int x, p_factor;

	x = 612852475143;
	for (p_factor = 2; p_factor <= x; p_factor++)
	{
		if (x % p_factor == 0)
		{
			x /= p_factor;
			p_factor--;
		}
	}
	printf("%ld\n", p_factor);
	return (0);
}
