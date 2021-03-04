#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *string_nconcat-concatenates two strings upto the nth byte of s2
 *@s1: first string
 *@s2: second string
 *@n: byters in s2
 *
 *Return:pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int i, j, k, l, m;

if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
k = 0;
while (*(s1 + k))
k++;
l = 0;
while (n >= (*(s2 + l)))
l++;
m = k + l;
s3 = malloc(sizeof(char) * (m + 1));
if (s3 == 0)
return (0);
for (i = 0; i < k; i++)
*(s3 + i) = *(s1 + i);
l = n;
for (j = 0; j < l; j++, i++)
*(s3 + i) = *(s2 + j);
*(s3 + m) = '\0';
return (s3);
}
