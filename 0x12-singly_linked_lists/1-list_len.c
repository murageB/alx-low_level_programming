#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to node
 *
 * Return: node
 */

size_t list_len(const list_t *h)
{
size_t node = 0;

while (h != NULL)
{
h = h->next;
node++;
}
return (node);
}
