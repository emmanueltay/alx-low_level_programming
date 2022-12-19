#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: is the string
 * Return: no value
 */

void print_rev(char *s)
{
	int pos = 0;

	while (s[pos] != '\0')
		pos++;
	for (pos = pos - 1; pos >= 0; pos--)
		_putchar(s[pos]);
	_putchar('\n');
}
