#include "main.h"
#include <stdio.h>
/**
 * main - This program computes and prints
 * the sum of the multiples of 3 and 5 below 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	int sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
			sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
