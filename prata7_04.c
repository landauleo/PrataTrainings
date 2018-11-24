#include <stdio.h>

int main(void)
{
  char ch;
  int i = 0;

  printf("Enter your symbols or # for exit:\n");

  while ((ch = getchar()) != '#')
  {
    if (ch == '.')
    {
      putchar('!');
      i++;
    }
    else if (ch == '!')
    {
      putchar('!');
      putchar('!');
      i++;
    }
    else
    {
      putchar(ch);
      i++;
    }
  }

  printf("The number of operations: %d\n", i);

  return 0;
}
