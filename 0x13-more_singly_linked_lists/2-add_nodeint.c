#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the bginning of a listint_t list
 * @head: pointer to head pointer
 * @n: data int
 *
 * Return: the address of the new element, or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));

if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = NULL;
new_node->next = *head;
*head = new_node;

free(new_node);
return (new_node);
}
