#include "holberton.h"

/**
 * leet - encodes a string into 1337
 *@str: string
 *
 *Return: string with 1337
 */

char *leet(char *str)
{
  int i;
  int j;
  char bfr[] = "aeotlAEOTL";
  char aft[] = "4307143071";

for (i = 0; str[i] != '\0'; i++)
{
for (j =0; bfr[j] != '\0'; j++)
{
if (str[i] == bfr[j])
{
str[i] = aft[j];
}
}
}
return (str);
}
