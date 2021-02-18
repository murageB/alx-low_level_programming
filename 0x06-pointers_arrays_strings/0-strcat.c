#include "holberton.h"

/**
 *_strcat - concatenates two strings.
 *@dest: charater string destination.
 *@src: character string source.
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
while (dest[i] != '\0') /* move till th end of string*/
{
i++;
}
j = 0;
while (src[j] != '\0') /* copy src to dest */
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0'; /* ensures that dest is NULL terminated */
return (dest);
}
