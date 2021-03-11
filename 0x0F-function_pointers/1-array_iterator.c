#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iteration - executes a function given as a parameter on each element of an array. 
 * @array: pointer to array
 * @size: integer
 * @action: function pointer
 *
 * REturn: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
