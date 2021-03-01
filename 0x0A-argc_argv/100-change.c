#include <stdio.h>
#include <stdlib.h>

/**
 *count_coin-counts the coint that we can get from a number
 *@argv: pointer to string pointer
 *@count: integer that holds the number of coins counted
 *
 *Return: integer
 */

unsigned int count_coin(unsigned int count, char *argv[])
{
unsigned int sum = 0;
unsigned int total = atoi(argv[1]);

while (!(sum + 25 > total))
{
sum += 25;
count++;
}

while (!(sum + 10 > total))
{
sum += 10;
count++;
}

while (!(sum + 5 > total))
{
sum += 5;
count++;
}

while (!(sum + 2 > total))
{
sum += 2;
count++;
}

while (!(sum + 1 > total))
{
sum += 1;
count++;
}
return (count);
}

/**
 *main-prints the minumum number of coins to make chang for an amount of money
 *@argc: integer
 *@argv: pointer to a string pointer
 *
 *Return: 1 if there is an error and 0 if the result is not negative
 */

int main(int argc, char *argv[])
{
unsigned int count = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (atoi(argv[1]) < 0)
{
printf("%d\n", 0);
return (0);
}
count = count_coin(count, argv);
printf("%d\n", count);
return (0);
}
