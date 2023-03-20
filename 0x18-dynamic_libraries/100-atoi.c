#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted
 * Return: the int
 */

int _atoi(char *s)
{
	int i = 0;

	int x = 0;

	int sign = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (x >= 0)
		{
			x = x * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			x = x * 10 - (s[i] - '0');
			i++;
		}
	}
	sign *= -1;
	return (x * sign);
}

