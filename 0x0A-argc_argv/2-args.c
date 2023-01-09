#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments
 * @argv: array of vectors to be passed
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
