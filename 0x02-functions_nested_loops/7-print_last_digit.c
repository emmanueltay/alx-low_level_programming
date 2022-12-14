#include "main.h"
/**
 * print_last_digit - it prints the last digit of an integer
 * @x: The integer entered
 * Return: value of the last digit
 */

int print_last_digit(int x)
{
	int y = x % 10;

	if (y < 0)
		y *= -1;
	_putchar(y + '0');
	return (y);
}
