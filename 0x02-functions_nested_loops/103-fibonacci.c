#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms,
 * followed by a new line if the sum of the Fibonacci terms
 * do not exceed 4000000
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	long x = 1;

	long y = 2;

	long sum = y;

	while ((x + y) < 4000000)
	{
		y += x;
		if (y % 2 == 0)
		sum += y;
		x = y - x;
	}
	i++;
	printf("%ld\n", sum);
	return (0);
}
