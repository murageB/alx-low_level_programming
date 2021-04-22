#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t list
 * @head: pointer to head node
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *previous = NULL;
unsigned int count;

if (*head == NULL || head == NULL)
return (-1);

current = *head;
count = 0;

while (current != NULL)
{
if (count == index)
{
if (previous == NULL)
{
*head = current->next;
free(current);
return (1);
}
previous->next = current->next;
free(current);
return (1);
}
previous = current;
current = current->next;
count++;
}
return (-1);
}
