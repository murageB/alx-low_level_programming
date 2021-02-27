
#include "holberton.h"

/**
 *_strncat - concatenates two strings with using at most 'n'bytes from src
 *@dest: character string to destination.
 *@src: character string to source.
 *@n: integer.
 *
 *Return: pointer to string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

for (i = 0; dest[i] != '\0'; i++) /* move to the end of dest*/
{
continue;
}
for (j = 0; src[j] != '\0' && j < n; j++) /*Appends n chars of src to dest*/
{
dest[i + j] = src[j];
}
dest[i + j] = '\0'; /* NULL terminates dest string */
return (dest);
}
