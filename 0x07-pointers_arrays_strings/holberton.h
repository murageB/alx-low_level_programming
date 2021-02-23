#ifndef HOLBERTON_H
#define HOLBERTON_H

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
 *_strpbrk-locates the first occurrence of any bytes from *accept in *s
 */
char *_strpbrk(char *s, char *accept);


#endif
