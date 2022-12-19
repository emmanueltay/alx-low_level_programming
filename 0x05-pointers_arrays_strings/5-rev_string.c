#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: is the input
 * Return: no value
 */

void rev_string(char *s)
{
	int x = 0;

	int y;

	char rv_str = s[0];

	while (s[x] != '\0')
		x++;
	for (y = 0; y < x; y++)
	{
		x--;
		rv_str = s[y];
		s[y] = s[x];
		s[x] = rv_str;
	}
}

