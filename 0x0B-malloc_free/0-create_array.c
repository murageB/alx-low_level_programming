#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *create_array-creates an arrayof char,and initializes it witha specific char
 *@size: size of array
 *@c: intialization char
 *
 *Return: a pointer to the array , or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr = (char *)malloc(sizeof(char) * size);

if (size == 0 || !size || !ptr)
return (NULL);

for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
