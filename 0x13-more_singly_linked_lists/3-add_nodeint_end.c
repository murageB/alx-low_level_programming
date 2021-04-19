#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end  - adds a ew node at the end of a listint_t list
 * @head: pointer to head pointer
 * @n : data to be stored in listint_t list
 *
 * Return: the  address of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *new_end_node;

new_end_node = malloc(sizeof(listint_t));

if (!new_end_node)
return (NULL);

new_end_node->n = n;
new_end_node->next = NULL;

if (!*head)
*head = new_end_node;
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_end_node;
}
return (new_end_node);
}
