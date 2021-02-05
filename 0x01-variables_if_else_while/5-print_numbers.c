#include <stdio.h>

int main()
{
  int num;
  
  num = 0;

  while(num < 10)
    {
      printf("%d", num);
      num++;
    }

  putchar('\n');

  return 0;
}
