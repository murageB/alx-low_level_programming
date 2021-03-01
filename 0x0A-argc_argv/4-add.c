#include <stdio.h>
#include <stdlib.h>

/**
 *main-adds positive numbers
 *@argc: integer value
 *@argv: pointer to string pointer
 *
 *Return: 1 if ther is an error, 0 if the input is correct
 */

int main(int argc, char *argv[])
{
int i, j, sum;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-'))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
