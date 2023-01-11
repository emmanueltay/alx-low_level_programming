#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a paramete
 * @str: the string to be copied
 * Return:  pointer to a new string
 * NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int j, i = 0;

	if (str == NULL)
		return (NULL);
	for (j = 0; *(str + j) != '\0';)
		j++;

	ptr = (char *) malloc((j + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; *(str + j) != '\0';)
	{
		*(ptr + i) = *(str + j);
		i++;
		j++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
