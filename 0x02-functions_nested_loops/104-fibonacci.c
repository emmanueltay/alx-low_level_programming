#include <stdio.h>
#include "main.h"
/**
 * main - a program that finds and prints the first 98
 * Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	unsigned long x = 0, y = 1, sum;

	unsigned long fibo1_half1, fibo1_half2, fibo2_half1, fibo2_half2;

	unsigned long half1, half2;

	for (i = 0; i < 92; i++)
	{
		sum = x + y;
		printf("%lu, ", sum);
		x = y;
		y = sum;
	}
	fibo1_half1 = x / 10000000000;
	fibo1_half2 = x % 10000000000;
	fibo2_half1 = y / 10000000000;
	fibo2_half2 = y % 10000000000;
	for (i = 93; i < 99 ; i++)
	{
		half1 = fibo1_half1 + fibo2_half1;
		half2 = fibo2_half2 + fibo1_half2;
		if (fibo1_half2 + fibo2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");
		fibo1_half1 = fibo2_half1;
		fibo1_half2 = fibo2_half2;
		fibo2_half1 = half1;
		fibo2_half2 = half2;
	}
	printf("\n");
	return (0);
}
