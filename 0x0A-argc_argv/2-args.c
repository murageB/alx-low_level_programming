#include <stdio.h>

/**
 *main-prints all the argument it recieves
 *@argc: integer
 *@argv: pointer to a pointer to a string
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
int i = 0;

while (i < argc)
printf("%s\n", argv[i++]);
return (0);
}
