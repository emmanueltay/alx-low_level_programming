#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int _100 = '0';

	int _10 = '0';

	int _1 = '0';

	for (_100 = '0'; _100 <= '9'; _100++)
	{
		for (_10 = '0'; _10 <= '9'; _10++)
		{
			for (_1 = '0'; _1 <= '9'; _1++)
			{
				if (!((_1 == _10) || (_10 == _100) || (_10 > _1) || (_100 > _10)))
				{
					putchar(_100);
					putchar(_10);
					putchar(_1);
					if (!(_1 == '9' && _10 == '8' && _100 == '7'))
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
