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
while (*head != NULL)
{
current_node = (*head)->next;
free(*head);
*head = current_node;
}
*head = NULL;
}
}
