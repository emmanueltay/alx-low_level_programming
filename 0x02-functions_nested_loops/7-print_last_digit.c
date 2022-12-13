#include "main.h"
/**
 * print_last_digit - it prints the last digit of an integer
 * @x: The integer entered
 * Return: Always 0 (Success)
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
		y *= -1;
	_putchar(y + '0');
}
