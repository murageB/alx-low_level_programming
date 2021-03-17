#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of type of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
va_list prnt;
unsigned int i = 0;
char *str;

va_start(prnt, format);

while (format && format[i])
{
switch (format[i++])
{
case 'c':
printf("%c", va_arg(prnt, int));
break;
case 'i':
printf("%d", va_arg(prnt, int));
break;
case 'f':
printf("%f", va_arg(prnt, double));
break;
case 's':
str = va_arg(prnt, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
continue;
}
if (format[i])
printf(", ");
}
printf("\n");
va_end(prnt);
}
