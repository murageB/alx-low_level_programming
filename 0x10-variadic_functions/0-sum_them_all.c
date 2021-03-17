#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all its parameters
 * @n: constant unsigned int
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i;
va_list arglist;
if (n == 0)
return (0);
va_start(arglist, n);
for (i = 0; i < n; i++)
{
sum += va_arg(arglist, int);
}
va_end(arglist);
return (sum);
}
