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
int n = 0;
char *dup;
char *p;

dup = (char *)malloc(sizeof(char)*(n + 1));

if (str == NULL || dup == NULL)
return (NULL);
while (str[n])
n++;
p = dup;
while (*str)
{
*p = *str;
p++;
str++;
}
*p = '\0';
return (dup);
}
