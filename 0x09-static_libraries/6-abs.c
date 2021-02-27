#include "holberton.h"

/**
 *_abs - compute absolute value of integer.
 *@n: integer.
 *
 *Return: int.
 */

int _abs(int n)
{
if (n < 0)
{
n = n * (-1);
return (n);
}
else
return (n);
}
