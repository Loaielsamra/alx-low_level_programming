#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - gets the operation to do
 * @sign: operation to do
 * Return: pointer to function that corresponds with operator
 */

int (*get_op_func(char *sign))(int, int)
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
	while (i < 5)
	{
		if (ops[i].op[0] == sign[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
