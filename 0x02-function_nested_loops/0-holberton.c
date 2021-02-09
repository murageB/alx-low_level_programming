#include <stdio.h>

int main()
{
  int h =0;
  char my_sch[9]= "Holberton";
  
  while (h < 9)
    {
      putchar(my_sch[h]);
      h += 1;
    }
  putchar('\n');
  return (0);
}
