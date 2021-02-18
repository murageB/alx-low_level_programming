#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 *_strcat - concatenates two strings
 */

char *_strcat(char *dest, char *src);

/**
 *_strncat - concatenates two srings wil at most n bytes for source
 */
char *_strncat(char *dest, char *src, int n);

/**
 *_strncpy - copies a string
 */
char *_strncpy(char *dest, char *src, int n);

/**
 *_strcmp - compares two strings
 */
int _strcmp(char *s1, char *s2);

/**
 *reverse_array - reverses the content of an array of integers
 *@n: number of of elements to swap.
 */
void reverse_array(int *a, int n)

#endif
