#include "holberton.h"

/**
 * main - program that prints Holberton
 *
 *Return: int
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
_putchar('\n');/*prints new line*/
return (0);
}
