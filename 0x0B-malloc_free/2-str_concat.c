#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to concatenated string (Success)
 * NULL (failure)
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1, len2;
	char *s3;

	len1 = 0;
	while (s1 && s1[len1])
		len1++;

	len2 = 0;
	while (s2 && s2[len2])
		len2++;

	s3 = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;
	if (s1)
	{
		while (i < len1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (j < len2)
		{
			s3[i] = s3[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
