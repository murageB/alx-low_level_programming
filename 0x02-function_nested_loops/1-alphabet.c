#include "holberton.h"

/**
 * print_alphabet - function that prints the alphabet in lowercase.
 */

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z' ; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
return;
}
