#include "holberton.h"

/**
 *jack_bauer - prints every minute of day of Jack Bauer.
 *starting from 00:00 to 23:59.
 *Return: void.
 */

void jack_bauer(void)
{
int hr = 0;
int min;

while(hr <= 23)
{
min = 0;
while (min <= 59)
{
_putchar(hr / 10 + '0');
_putchar(hr % 10 + '0');
_putchar(':');
_putchar(min / 10 + '0');
_putchar(min % 10+ '0');
_putchar('\n');
min++;
}
hr++;
}
}
