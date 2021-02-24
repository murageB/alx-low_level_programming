#include "holberton.h"

/**
 *_pow_recursion-gets the value of x raised to power y
 *@x: integer
 *@y: power
 *
 *Return: value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y % 2 == 0)
return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
else
return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
