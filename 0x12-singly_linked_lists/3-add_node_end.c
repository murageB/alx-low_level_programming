#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to first node
 * @str: pointer to char string to be store in nodes
 *
 * Return: pointer to end node
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *end_node;
unsigned int l = 0;
list_t *temp;

while (str[l])
l++;

end_node = malloc(sizeof(list_t));
if (!end_node)
return (NULL);

end_node->str = strdup(str);
end_node->len = l;
end_node->next = NULL;

if (*head == NULL)
{
(*head) = end_node;
return (end_node);
}

temp = *head;
while (temp->next)
temp = temp->next;
temp->next = end_node;
return (end_node);
}
