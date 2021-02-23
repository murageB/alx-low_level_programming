#include "holberton.h"

/**
 *_strchr-locates a character in a string
 *@s: string to be checked
 *@c: character to be located
 *
 *Return: s if the character if found or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
unsigned int i, len;
char *found;

found = 0;
i = 0;
len = 0;

while (*(s + i) != '\0')
len++;
while (i <= len)
{
if (*(s + i) == c)
{
found = s + i;
break;
}
i++;
}
if (found)
return (found);
else
return (0);
}
