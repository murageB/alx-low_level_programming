#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head pointer
 * @str: pointer to str
 *
 * Return: pointer to head
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int l = 0;

while (str[l])
l++;

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
new_node->len = l;
new_node->next = (*head);
(*head) = new_node;

return (*head);
}
