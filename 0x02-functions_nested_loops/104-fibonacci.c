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

	long x = 0;

	long y = 1;

	long sum;

	for (i = 0; i < 99; i++)
		sum = x + y;
		x = y;
		y = sum;
		printf(", %d", sum);
	printf('\n');
	return (0);
}
