#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc-allocates memory for an array,using malloc
 *@nmemb: number of element in an array
 *@size: size of array
 *
 *Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *c;
unsigned int i;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
else
{
c = malloc(nmemb * size);
for (i = 0; i < (nmemb * size); i++)
{
c[i] = '\0';
}
return (c);
}
}
