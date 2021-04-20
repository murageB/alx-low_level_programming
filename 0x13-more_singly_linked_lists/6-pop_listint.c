#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head node of a listint_t list
 *
 *Return: head node data(n)
 */

int pop_listint(listint_t **head)
{
listint_t *current;
int i;

if (*head == NULL)
return (0);

current = *head;
i = current->n;
*head = (*head)->next;

free(current);

return (i);
}
