#include "holberton.h"

/**
 *_islower - checks for lowercase character.
 *@c : input character to check.
 *Return: int.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
