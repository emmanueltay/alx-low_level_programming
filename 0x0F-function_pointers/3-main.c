#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * main - Program Entry
 * @argc: number of arguments
 * @argv: array of command line arguments
 * Description: The program takes arguments
 * (program name, two integer variables
 * and the operator) to perform the operation
 * between two numbers
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
