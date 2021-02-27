#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 *_putchar - putchar
 */
int _putchar(char c);

/**
 *checks for lower character.
 */
int _islower(int c);

/**
 *checks for alphabetic character.
 */
int _isalpha(int c);

/**
 *prints the sign of a number.
 */
int print_sign(int n);

/**
 *computes the absolute value of an integer.
 */
int _abs(int);

/**
 *checks for uppercase.
 */
int _isupper(int c);

/**
 *checks for a digit(0 through 9).
 */
int _isdigit(int c);

/**
 *returns the length of a string.
 */
int _strlen(char *s);

/**
 *prints a string to stdout.
 */
void _puts(char *str);

/**
 *_strcpy
 */
char *_strcpy(char*dest, char *src);

/**
 *_atoi
 */
int atoi(char *s);

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
 *_memset - fills memory with constant byte.
 */
char *_memset(char *s, char b, unsigned int n);

/**
 *_memcpy - copies memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 *_strchr-locates a character in string
 */
char *_strchr(char *s , char c);

/**
 *_strspn-gets the length of a prefix substring
 */
unsigned int _strspn(char *s,char *accept);

/**
 *_strpbrk-locates the first occurrence of any bytes from *accept in * s
 */
char *_strpbrk(char *s, char *accept);

/**
 *_strstr-locates a substring
 */
char *_strstr(char *haystack, char *needle);



#endif
