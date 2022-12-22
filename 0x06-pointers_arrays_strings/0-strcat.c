#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the first string
 * @src: the second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
	do {
		dest[i] = src[x];
		a++;
		i++;
	} while (src[a] != '\0');
	return (dest);
}
