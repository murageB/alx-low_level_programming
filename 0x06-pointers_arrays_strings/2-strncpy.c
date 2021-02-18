#include "holberton.h"

/**
 *_strncpy - copies a string
 *@dest: char string destination
 *@src: char string source
 *@n: integer
 *
 *Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{

while (*src && n--) /*cpy first char of string pointed by src into dest*/
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (dest);
}
