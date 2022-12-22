#include "main.h"

/**
 * leet - encodes a string into 1337speak
 * @x: input
 * Return: x
 */

char *leet(char *x)
{
	int i, j;

	char str1[] = "aAeEoOtTlL";

	char str2[] = "4433007711";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == str1[j])
			{
				X[i] = str2[j];
			}
		}
	}
	return (x);
}

