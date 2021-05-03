#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 *_putchar
 */
int _putchar(char c);

/**
 *takes a pointer to an int as parameterand updates the value to 98.
 */
void reset_to_98(int *n);

/**
 *swaps the value of two integers'
 */
void swap_int(int *a, int *b);

/**
 *returns the length of a string.
 */
int _strlen(char *s);

/**
 *prints a string to stdout.
 */
void _puts(char *str);

/**
 *prints a string, in reverse.
 */
void print_rev(char *s);

/**
 * rev_string - reverses a string
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string starting with the first character
 * followed by a new line
 */
void puts2(char *str);

/**
 * puts_half - prints half of a string followed by a new line
 */
void puts_half(char *str);

/**
 * print_array - prints n elements of an array of integers
 */
void print_array(int *a, int n);

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte
 * to the buffer pointed to by dest
 */
char *_strcpy(char *dest, char *src);


/**
 *prints 10 times the number 0 to 14.
*/
void more_numbers(void);

/**
 *draws a straight line in the terminal.
 */
void print_line(int n);

/**
 *draws a diagonal line on the terminal.
 */
void print_diagonal(int n);

/**
 *prints a square.
 */
void print_square(int size);

/**
 *prints a triangle.
 */
void print_triangle(int size);


#endif
