#include "holberton.h"

/**
 *_puts_recursion-prints a string
 *@s: string to be printed
 *
 *Return: void
 */

void _puts_recursion(char *s)
{
int i = 0;

if (*(s + i) == '\0')
return;
else
_putchar(s[i]);
_puts_recursion(s + 1);
}


