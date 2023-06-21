#include "3-calc.h"

/**
 * get_op_func - returns a function that performs the passed operation
 * @s: the operation
 * Return: a pointer to the function
 */
int (*get_op_func(char *s))(int, int) {
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
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
