#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog structure
 * Return:no value
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		(*d).name == NULL ? printf("nil\n") : printf("%s\n", (*d).name);
		printf("Age: ");
		printf("%f\n", (*d).age);
		printf("Owner: ");
		(*d).owner == NULL ? printf("nil\n") : printf("%s\n", (*d).owner);
	}
}
