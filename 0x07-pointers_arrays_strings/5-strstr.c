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
	char *loop_haystack;

	char *loop_needle;

	while (*haystack != '\0')
	{
		loop_haystack = haystack;
		loop_needle = needle;

		while (*haystack != '\0' && *loop_needle != '\0'
				&& *haystack == *loop_needle)
		{
			haystick++;
			loop_needle++;
		}
		if (!*loop_needle)
			return (loop_haystack);
		haystack = loop_haystack + 1;
	}
	return ('\0');
}
