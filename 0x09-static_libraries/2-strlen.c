#include "holberton.h"

/**
 * _strlen - length of string
 *@s: char.
 *Return: int.
 */

int _strlen(char *s)
{
int a;

for (a = 0; s[a] != '\0'; a++)
continue;
return (a);
}
