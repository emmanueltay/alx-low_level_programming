#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hundreds_position = '0';

	int tens_position = '0';

	int ones_position = '0';

	for (hundreds_position = '0'; hundreds_position <= '9'; hundreds_position++)
	{
		for (tens_position = '0'; tens_position <= '9'; tens_position++)
		{
			for (ones_position = '0'; ones_position <= '9'; ones_position++)
			{
				if (!((ones_position == tens_position) || (tens_position == hundreds_position) || (tens_position > ones_position) || (hundreds_position > tens_position)))
				{
					putchar(hundreds_position);
					putchar(tens_position);
					putchar(ones_position);
					if (!(ones_position == '9' && tens_position == '8' && hundreds_position == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
