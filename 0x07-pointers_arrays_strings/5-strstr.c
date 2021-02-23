#include "holberton.h"

/**
 *_strstr-locates a string
 *@haystack: string to checked
 *@needle: substring to be checked in haystack
 *
 *Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *begin = haystack;
char *pattern = needle;

while (*haystack && *pattern && *haystack == *pattern)
{
haystack++;
pattern++;
}
if (!*pattern)
return (begin);

haystack = begin + 1;
}
return (0);
}
