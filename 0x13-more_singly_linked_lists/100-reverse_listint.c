#include "lists.h"
/**
 *reverse_listint- reverses the list.
 *@head:a ptr to ptr the listint_t list
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *nxt;

prev = NULL;
while (*head != NULL)
{
nxt = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = nxt;
}
*head = prev;
return (*head);
}
