#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 *_putchar
 */
int _putchar(char c);

/**
 *checks for uppercase.
 */
int _isupper(int c);

/**
 *checks for a digit(0 through 9).
 */
int _isdigit(int c);

/**
 *multiplies two integers.
 */
int mul(int a, int b);

/**
*print the numbers, from 0 to 9.
*/
void print_numbers(void); 

/**
 *print numbers, from 0 to 9 but omits 2 and 4.
 */
void print_most_numbers(void);

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
