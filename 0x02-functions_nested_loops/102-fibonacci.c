#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	long x = 1;

	long y = 2;

	while (i < 50)
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
		i++;
	}
	printf("\n");
	return (0);
}
