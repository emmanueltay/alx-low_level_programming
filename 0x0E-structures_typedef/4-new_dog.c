#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @str: the string
 * Return: the length of the string
 */

int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}


/**
 * _strcopy - copies one string to another one
 * @src: the string to be copied
 * @dest: the string to be copied to
 * Return: the @dest string
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct pointer dog and NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || !owner || age < 0)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	(*dog).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	(*dog).name = _strcopy((*dog).name, name);
	(*dog).age = age;
	(*dog).owner = _strcopy((*dog).owner, owner);
	return (dog);
}
