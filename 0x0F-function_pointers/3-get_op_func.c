#include <stdio.h>
#include <string.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - get an operation
 * @s: operator
 * Return: No
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
int b;

b = 0;
while (ops[b].op && s)
{
if (!strcmp(ops[b].op, s))
return (ops[b].f);
b++;
}

return (NULL);
}
