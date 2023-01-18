#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - get ops function pointer of type char array
 * that accepts two inputs of int data type
 * @s: a character pointer pointing to a symbol
 * from the program command line argument
 * Return: one of the operator functions to perform calculations
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
