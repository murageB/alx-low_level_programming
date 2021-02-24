#include "holberton.h"

/**
 *factorial-finds the factorial of a given number
 *@n: number to be checked
 *
 *Return: factorial of n or -1 if n < 0
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 1)
return (1);
return (n * factorial(n - 1));
}
