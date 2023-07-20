#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function declaration
 *
 * @s: char pointer
 *
 * Return: value of ops
*/
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
