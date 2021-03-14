#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *int_index - searches for an integer
 *@array: pointer to int array
 *@size: size of array
 *@cmp: pointer to the function to be used to compare values
 *
 *Return: integer
 */


int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
for (i = 0; i < size; i++)
if (cmp(array[i]))
return (i);
return (-1);
}
