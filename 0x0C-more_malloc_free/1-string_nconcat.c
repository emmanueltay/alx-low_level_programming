#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of s2 to be concatenated to s1
 * Return:pointer to the new created string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i, j;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";

	for (len1 = 0; s1[len1] != '\0';)
		len1++;
	for (len2 = 0; s2[len2] != '\0';)
		len2++;

	if (n >= len2)
		n = len2;
	s3 = (char *) malloc(sizeof(char) * (len1 + n + 1));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
