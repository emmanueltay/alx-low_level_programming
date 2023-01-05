#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: an input pointer
 * Return: no value
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, x = 0;

	while (x < 8)
	{
		i = 0;
		while (i < 8)
		{
			_putchar(a[x][i]);
			i++;
		}
		_putchar('\n');
		x++;
	}
}
