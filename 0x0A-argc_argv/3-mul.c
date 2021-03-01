#include <stdio.h>
#include <stdlib.h>

/**
 *main-multiplies two numbers
 *@argc: integer
 *@argv: pointer to a string pointer
 *
 *Return: 1 if there is an error and 0 for correct out put
 */

int main(int argc, char *argv[])
{
if (argc - 1 < 2)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
