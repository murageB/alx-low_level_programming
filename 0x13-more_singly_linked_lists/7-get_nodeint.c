#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t linked list
 * @head: pointer to the head node
 * @index: index to the nth node
 *
 * Return: returns the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;

while (count < index)
{
if (head == NULL)
return (NULL);
count++;
head = head->next;
}
return (head);
}
