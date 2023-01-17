#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from, 
 * followed by a new line
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
