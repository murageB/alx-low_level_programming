#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range-creates an array of integers
 *@min: minimum number in the range
 *@max: maximum number in the range
 *
 *Return: pointer to the new array
 */

int *array_range(int min, int max)
{
unsigned int range, i;
int *rng;
if (min > max)
return (NULL);
range = max - min;
rng = malloc(sizeof(int) * (range + 1));
if (rng == NULL)
return (NULL);
for (i = 0; i < range; i++)
rng[i] = i + min;
rng[range] = max;
return (rng);
}
