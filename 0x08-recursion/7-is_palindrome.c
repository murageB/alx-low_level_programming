#include "holberton.h"

/**
 *pali_check-checks if string is a palindrome
 *@s: pointer to the string to be checked
 *@a: first integer in string
 *@b: last integer in string
 *@flag: holding address of return value
 *Return:void
 */
void pali_check(char *s, int a, int b, int *flag)
{
if (a < b + 1)
{
if (s[a] != s[b])
{
flag *= 0;
}
else
{
flag *= 1;
}
pali_check(s, a + 1, b - 1, flag);
}

/**
 *_strlen_recursion-finds the length of a string
 *@s: string to be checked
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 *is_palindrome-checks if string is a palindrome
 *@s: pointer to string to be checked
 *Return:1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
int flag = 1;
if (_strlen_recursion(s) == 0)
return (flag);
pali_check(s, 0, _strlen_recursion(s) - 1, &flag);
return (flag);
}
