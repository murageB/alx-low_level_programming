#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_op_func - selects the correct function to perform the operation.
 *@s: character pointer
 *
 *Return: a pointer to the function that corresponds to the operator
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
while (i < 5)
{
if (s[0] == *ops[i].op)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
