#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another
 *  @m: The number to flip n to
 * @n: The number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, bit = 0;

	diff = n ^ m;
	while (diff > 0)
	{
		bit += (diff & 1);
		diff >>= 1;
	}
	return (bit);
}
