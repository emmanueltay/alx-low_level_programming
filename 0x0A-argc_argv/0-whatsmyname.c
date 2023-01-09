#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
