#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid-returns a pointer to a 2 dimensional array of integers
 *@width: integer
 *@height: integer
 *
 *Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
int i, j, k;
int **ptr;

if (width <= 0 || height <= 0)
return (NULL);
else
{
ptr = (int **)malloc(sizeof(int *) * height);
if (ptr == 0)
return (NULL);
for (k = 0; k < height; k++)
{
ptr[k] = (int *)malloc(sizeof(int) * width);
if (ptr[k] == 0)
return (NULL);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
ptr[i][j] = 0;
}
return (ptr);
}
}

