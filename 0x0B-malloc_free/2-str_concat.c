#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat-concatenates two strings
 *@s1: string to be concatenates
 *@s2: string to be concatenates
 *
 *Return: pointer to a newlly allocated space in memory,and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
char *s3;
int n, m, i, j;

if (s1 == 0)
s1 = "\0";
if (s2 == 0)
s2 = "\0";
n = 0;
while (s1[n])
n++;
m = 0;
while (s2[m])
m++;
s3 = malloc(sizeof(char) * (n + m + 1));
if (s3 == 0)
return (0);
for (i = 0; i < n; i++)
s3[i] = s1[i];
for (j = 0; j < m; j++, i++)
s3[i] = s2[j];
s3[n + m] = '\0';
return (s3);
}
