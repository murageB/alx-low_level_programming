#include "holberton.h"

/**
 *print_diagonal- prints a diagonal line on terminal.
 *@n: integer.
 */

void print_diagonal(int n)
{
int a = 0;
int b = 0;

if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b <= n; b++)
{
if (a == b)
{
_putchar(92);
break;
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
