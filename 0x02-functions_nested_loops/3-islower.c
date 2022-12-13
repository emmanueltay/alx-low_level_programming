#include "main.h"
/**
 * _islower - checks if a character is lower case
 * Return: 1 if character is lower case, and 0 if otherwise
 *@x: - is the character to be checked
 */

int _islower(int x)
{

	if (x <= 'a' && x >= 'z')
		return (1);
	else
		return (0);
}
