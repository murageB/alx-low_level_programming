#include "holberton.h"

/**
 *string_toupper - changes all lowercase leteers to uppercase
 *@lett: character string
 *Return: uppercase string
 */

char *string_toupper(char *lett)
{
int c = 0;

while (lett[c] != '\0')
{
if (lett[c] >= 'a' && lett[c] <= 'z')
{
lett[c] = lett[c] - 32;
}
c++;
}
return (lett);
}
