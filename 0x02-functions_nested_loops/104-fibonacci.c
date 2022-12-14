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

	unsigned long x = 1;

	unsigned long y = 2;

	for (i = 0; i < 99; i++)
	{
		if (i == 0)
			printf("%ld", x);
		else if (i == 1)
			printf(", %ld", y);
		else
		{
			y += x;
			x = y - x;
			printf(", %ld", y);
		}
	}
	printf("\n");
	return (0);
}
