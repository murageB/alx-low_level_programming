#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer to first node
 *
 * Return: void
 */

void free_list(list_t *head)
{
list_t *next;

while (head != NULL)
{
next = head->next;
free(head->str);
free(head);
head = next;
}
}
