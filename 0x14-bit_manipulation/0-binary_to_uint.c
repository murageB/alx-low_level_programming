#include "holberton.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b:a pointer to a string of 0 & 1 chars
 * Return: converted number or
 * if b is NULL or contains chars not 0 or 1 - 0.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int index = 0, dec = 0;

if (!b)
return (0);
while (b[index])
{
if (!(b[index] == '0' || b[index] == '1'))
return (0);
dec <<= 1;
if (b[index] == '1')
dec += 1;
index++;
}
return (dec);
}
