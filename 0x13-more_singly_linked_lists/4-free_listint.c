#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head:  pointer to head node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *temp;
if (head == NULL)
return;
while (temp != NULL)
{
temp = head-next;
free(head);
head = temp;
}
}
