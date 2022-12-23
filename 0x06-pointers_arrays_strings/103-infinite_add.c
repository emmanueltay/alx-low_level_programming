#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: the second number
 * @r: buffer that stores the result
 * @size_r: buffer size
 * Return: pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over_flow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, short_t_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || over_flow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		short_t_tot = val1 + val2 + over_flow;
		if (short_t_tot >= 10)
			over_flow = 1;
		else
			over_flow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (short_t_tot % 10) + '0';
		digits++;
		i--;
		j--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
