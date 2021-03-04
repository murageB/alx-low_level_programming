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
void *p;
char *c;
unsigned int i = nmemb;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
else
{
p = malloc(nmemb * size);
c = p;
for (i = 0; i < size; i++)
{
c[i] = '\0';
}
return (p);
}
}
