#include "holberton.h"

/**
 *_strchr-locates a character in a string
 *@s: pointer to the first occurrence of the character c
 *@c: character
 *
 *Return: s if the character if found or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
while (*s != c && *s != '\0')
{
s++;
}
if (*s == c)
{
return (s);
}
else
{
return ("");
}
}
