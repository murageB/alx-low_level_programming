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
unsigned int i, k = 0, l; 
if (s1 != NULL)
for (i = 0; s1[i] !== '\0'; i++)
k++;
l = k;
if (s2 != NULL)
{
if (sizeof(s2) > n)
for (i = 0; i < n; i++)
k++;
else
for (i = 0; s2[i] != '\0'; i++)
k++;
}
s3 = malloc(sizeof(char) * (k + 1));
if (s3 == NULL)
return (NULL);
s3[k] = '\0';
if (s1 != NULL)
for (i = 0; s[i] !='\0'; i++)
s3[i] = s1[i];
if (s2 != NULL)
for (; i < k; i++)
s3[i] = s2[i - l];
return (s3);
}
