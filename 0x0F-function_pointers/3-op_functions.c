#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *op_add - adds two integers
 *@a: integer
 *@b: integer
 *Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 *op_sub - subtracts two integer
 *@a: int
 *@b: int
 *Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 *op_mul - multiplies two integers
 *@a: int
 *@b: int
 *Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 *op_div - divides two integers
 *@a: int
 *@b: int
 *Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 *op_mod- finds the reminder of the division of two intergers
 *@a: int
 *@b: int
 *Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
