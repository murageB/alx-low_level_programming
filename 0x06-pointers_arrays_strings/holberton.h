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
 */
void reverse_array(int *a, int n);

/**
 *string_toupper - changes all lowercase leters to uppercase in a string
 */
char *string_toupper(char *);

/**
 *cap_string - capitalizes all words of a string
 */
char *cap_string(char *);


#endif
