#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
