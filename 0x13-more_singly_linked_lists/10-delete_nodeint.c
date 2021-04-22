#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t list
 * @head: pointer to head node
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current;
listint_t *previous;
unsigned int count;

if (*head == NULL || head == NULL)
return (-1);

current = *head;
count = 0;

if (index == 0)
{
*head = (*head)->next;
}
else
{
while (count < (index - 1))
{
if (current == NULL)
return (-1);
current = current->next;
count++;
}
previous = current;
current = current->next;
previous->next = current;
current = NULL;
}
free(current);
return (1);
}
