#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones_position = '0';

	int tens_position = '0';

	for (tens_position = '0'; tens_position <= '9'; tens_position++)
	{
		for (ones_position = '0'; ones_position <= '9'; ones_position++)
		{
			if (!((ones_position == tens_position) || (tens_position > ones_position)))
			{
				putchar(tens_position);
				putchar(ones_position);
				if (!(ones_position == '9' && tens_position == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
