#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase.
 *
 *Returns: 0.
 */

void print_alphabet_x10(void)
{
char alpha;
int l = 0;

while (l < 10)
{
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
l++;
}
}
