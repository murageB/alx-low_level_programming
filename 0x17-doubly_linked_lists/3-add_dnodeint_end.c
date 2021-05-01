#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head pointer
 * @n: data
 *
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *p = *head;

if (head == NULL)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
if (*head == NULL)
{
new->next = *head;
new->prev = NULL;
*head = new;
}
else
{
while (p->next != NULL)
p = p->next;
p->next = new;
new->prev = p;
new->next = NULL;
}
return (new);
}
