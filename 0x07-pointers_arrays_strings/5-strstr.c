#include "main.h"

/**
 * _strstr - finds the first occurrence of the
 * substring needle in the string haystack
 * @haystack: the entire string
 * @needle: the substring
 * Return: pointer to the beginning of the located substring, or
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;

	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *haystack == *n)
		{
			haystick++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
