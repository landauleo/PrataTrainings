#include <stdio.h>

int main(void)
{
  char ch;
  int i = 0, status = 0;

  printf("Enter your symbols or # for exit:\n");

  while ((ch = getchar()) != '#')
  {
    if (ch == 'e')
    {
      status = 1;
    }
    else if (status == 1 && ch == 'i')
    {
      i++;
      status = 0;
    }
    else
    {
      status = 0;
    }
  }

  printf("%d\n", i);
  return 0;

}
