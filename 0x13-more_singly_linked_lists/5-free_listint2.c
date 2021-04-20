#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the pointer of the head node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *current_node;

if (head == NULL || *head == NULL)
return;
else
{
while (current_node != NULL)
{
current_node = *head;
*head = current_node->next;
free(current_node);
}
}
}
