#include "holberton.h"

/**
 *pnum-checks for prime numbers
 *@num: integer to be checked
 *@count: division check integer
 *
 *Return: 1 if is prime number or 0 if not
 */

int pnum(int num, int count)
{
if (num <= 1)
return (0);
else if (num % count == 0)
return (0);
else if (count >= num / 2)
return (1);
return (pnum(num, count + 1));
}

/**
 *is_prime_number-checks if input integer is prime number
 *@n: input integer
 *
 *Return: 1 if is prime number or 0 if not
 */

int is_prime_number(int n)
{
return (pnum(n, 2));
}
