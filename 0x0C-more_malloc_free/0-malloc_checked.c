#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: size of memory allocated
 *
 *Return: a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);
if (!mem)
exit(98);
else
return (mem);
}
