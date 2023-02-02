#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer pointing to a string of 0 and 1 chars
 * Return: the converted numbe and 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;
	unsigned int number = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	i -= 1;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (0);
		if (b[j] == '1')
			number += (1 * (1 << i));
		j++;
		i--;
	}
	return (number);
}
