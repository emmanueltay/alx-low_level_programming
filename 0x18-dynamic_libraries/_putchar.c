#include <unistd.h>

/**
 * _putchar -writes the character to stdout
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
