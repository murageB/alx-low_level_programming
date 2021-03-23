#include "lists."
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to len
 * 
 * Return: len
 */

size_t print_list(const list_t *h)
{
size_t len;

if (h == NULL)
return (0);
len = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
len++;
}
return (len);
}
