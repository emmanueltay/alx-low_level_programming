#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int i, num_of_bytes;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num_of_bytes; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != num_of_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
