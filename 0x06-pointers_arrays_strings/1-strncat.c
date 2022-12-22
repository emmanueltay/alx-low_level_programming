#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to receive
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_of_dest;

	int i;

	for (len_of_dest = 0; dest[len_of_dest] != '\0';)
		len_of_dest++;
	for (i = 0; i < n && src[i] != '\0';)
		i++;
	dest[len_of_dest + i] = src[i];
	dest[len_of_dest + i] = '\0';
	return (dest);
}
