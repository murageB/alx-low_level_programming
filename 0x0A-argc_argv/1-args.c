#include <stdio.h>

/**
 *main-prints the number of arguments passed to it
 *@argc: integer
 *@argv: pointer to pointer to a string
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc - 1; (void)argv)
{
i++;
}
printf("%d\n", i);
return (0);
}
