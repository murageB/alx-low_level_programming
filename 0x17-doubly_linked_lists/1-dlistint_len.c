#include "lists.h"

/**
 * dlistint_len - prints all ellement of a dlistint_t list
 * @h: pointer to node
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t i;

for (i = 0; h != NULL; i++)
h = h->next;

return (i);
}
