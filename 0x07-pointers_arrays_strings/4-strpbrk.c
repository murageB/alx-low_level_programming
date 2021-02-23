#include "holberton.h"

/**
 *_strpbrk-locates the first occurrence of any of the bytes from *accept in *s
 *@s: string to be scanned
 *@accept: string of character needed to be located
 *
 *Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; *s++; i++)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
return (s);
}
}
return (0);
}
