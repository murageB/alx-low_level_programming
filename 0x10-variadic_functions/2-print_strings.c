#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: str
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *string;
va_list str;
va_start(str, n);
for (i = 0; i < n; i++)
{
string = va_arg(str, char *);
printf("%s", string != NULL ? string : "(nil)");
if (separator != NULL && i - 1 != 0)
printf("%s", separator);
}
printf("\n");
va_end(str);
}
