#include "holberton.h"

/**
 *nat_sqrt-checks if square root is natural
 *@n: integer to sqrt
 *@m: integer to root
 *
 *Return: square root or -1
 */

int nat_sqrt(int n, int m)
{
if (n == 1)
return (1);
else if (m * m > n || n < 0)
return (-1);
else if (m * m == n)
return (m);
else
return (nat_sqrt(n, m + 1));
}


/**
 *_sqrt_recursion-gets the natural square root of a number
 *nat_sqrt-checks if square root is natural
 *@n: number being checked for square root
 *
 *Return: square root of the number
 */

int _sqrt_recursion(int n)
{
return (nat_sqrt(n, 0));
}
