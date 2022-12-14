#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers starting
 * with 1 and 2
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
	printf("%d\n", sum);
	return (0);
}
