#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * print the second half of the string
 * @str: the input
 * Return: no value
 */

void puts_half(char *str)
{
	int str_len = 0;

	while (*str != '\0')
	{
		str_len++;
		str++;
	}
	str = str - (str_len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
