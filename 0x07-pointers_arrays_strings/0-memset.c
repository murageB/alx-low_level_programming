#include "holberton.h"

/**
 *_memset-fills memory with constant byte
 *@s: pointer to the destination memory
 *@b: value of byte to be filled
 *@n: number of bytes to be filled starting from s
 *
 *Return: value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(s + i) = b;

return (s);
}
