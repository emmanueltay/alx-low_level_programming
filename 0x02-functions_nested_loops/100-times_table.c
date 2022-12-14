#include "main.h"
/**
 * print_times_table - prints the time table of the input starting with zero
 * @n: is the input
 */

void print_times_table(int n)
{
	int num;

	int mul;

	int product;

	if (n > 0 && n < 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');
				product = num * mul;
				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar((product / 10) % 10 + '0');
				}
				else if
					(product <= 99 && product >= 10);
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
