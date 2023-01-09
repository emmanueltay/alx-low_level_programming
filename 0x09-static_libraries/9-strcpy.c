#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: first pointer
 * @src: second pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int str_length = 0;

	while (*(src + str_length) != '\0')
	{
		*(dest + str_length) = *(src + str_length);
		str_length++;
	}
	*(dest + str_length) = '\0';
	return (dest);
}
