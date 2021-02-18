#include "holberton.h"

/**
 *reverse_array - reverses the content of an array to integers
 *@a: an array of integers.
 *@n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
int i;
int temp = 0; /* holds the value of array during swap */

n = n - 1;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i];
a[n - i] = temp;
}

}
