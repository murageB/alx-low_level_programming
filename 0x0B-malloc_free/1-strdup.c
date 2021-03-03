#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup-ptr to newly allocated space in mem,which cointains a str duplicate
 *@str: source string
 *
 *Return: ptr to duplicate str,and NULL if mem is insufficient or str is NULL
 */

char *_strdup(char *str)
{
int i,  n = 0;
char *dup;

if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
n++;
dup = (char *)malloc(sizeof(char) * (n + 1));
if (dup == NULL)
return (NULL);
for (i = 0; str[i]; i++)
dup[i] = str[i];
dup[n] = '\0';
return (dup);
}
