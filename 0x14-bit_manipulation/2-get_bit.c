#include "main.h"

/**
 * get_bit - get bit at index
 * @n: the number
 *  @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit, bin;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	bin = n >> index;
	bit = bin & 1;
	return (bit);
}
