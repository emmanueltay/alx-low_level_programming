#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: is the character
 * Return: 1 if character is upper case and 0 when otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
