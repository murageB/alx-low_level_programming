#include "lists.h"

/**
 * dlistint_len - returns the number of elements in dlistint list
 * @h: pointer to head node of list
 *
 * Return:  number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}

/**
 * delete_dnodeint_at_index - deletes the node at a specified index
 * @head: double pointer to the first node
 * @index: position of node to delete
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int idx = 0;
dlistint_t *temp;

temp = *head;
if (*head == NULL || index > dlistint_len(temp))
return (-1);
if (index == 0 && temp->next)
{
(temp->next)->prev = NULL;
*head = temp->next;
free(temp);
return (1);
}
else if (index == 0 && temp)
{
free(temp);
*head = NULL;
return (1);
}
else
{
while (idx < index)
{
temp = temp->next;
idx++;
}
(temp->prev)->next = temp->next;
if (temp->next)
(temp->next)->prev = temp->prev;
free(temp);
return (1);
}
}
