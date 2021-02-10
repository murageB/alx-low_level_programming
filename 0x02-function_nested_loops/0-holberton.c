#include "holberton.h"

/**
 * program that prints Holberton, followed by a new line.
 */

int main(void)
{
int h = 0;
char sch[9] = "Holberton";
while (h < 9)
{
_putchar(sch[h]);
h += 1;
}
_putchar('\n');
return (0);
}
