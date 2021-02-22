#include "holberton.h"

/**
 *_strspn-gets the length of a prefix substring
 *@s: character string
 *@accept: character string
 *
 *Return: the number of bytes in the initial segementfro accept
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
unsigned int count = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
count++;
}
}
return (count);
}
