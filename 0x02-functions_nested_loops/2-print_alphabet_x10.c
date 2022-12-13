#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x = 0;

	char y = 'a';

	while (x < 10)
	{
		while (y <= 'z')
		{
			putchar(y);
			y++;
		}
		putchar('\n');
		x++;
	}
}
