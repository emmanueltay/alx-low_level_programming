#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet or not
 * @c: is the character to be checked
 * Return: 1 if the character is an alphabet(lower or upper) and 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
