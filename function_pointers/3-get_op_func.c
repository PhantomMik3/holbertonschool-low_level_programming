#include "3-calc.h"

/**
 * get_op_func - select correct arithmetic operation function
 * @s: pointer to operator
 * Return: if succesful return operator
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
	int i;

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
		if (ops[i].op == NULL)
		{
			return (NULL);
		}

	return (ops[i].f);
}
