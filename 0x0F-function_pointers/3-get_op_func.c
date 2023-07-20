#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
int (*get_op_func(char *s))(int, int);
/**
 *get_op_func - gets the correct function to perform
 * @s: operator
 * Return: pointer to correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
