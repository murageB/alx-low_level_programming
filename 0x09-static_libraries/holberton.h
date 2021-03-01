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
 *computes the absolute value of an integer.
 */
int _abs(int);

/**
 *checks for uppercase.
 */
int _isuppper(int c);

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
 *_strcpy-copies a string
 */
char *_strcpy(char *dest, char *src);
/**
 *_atoi-converts string to integer
 */
int _atoi(char *s);

/**
 *_strcat - concatenates two strings
 */

char *_strcat(char *dest, char *src);

/**
*_strncat - concatenates two srings with at most n bytes
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


#endif
