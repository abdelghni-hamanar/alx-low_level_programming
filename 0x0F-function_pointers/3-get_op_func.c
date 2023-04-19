#include "3-calc.h"

/* By Abdelghni Hamanar */
/**
* *get_op_func - Entry point
* @s: pointer to the function
* Return: void
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

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
