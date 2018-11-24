#include <stdio.h>

int main(void)
{
  char ch;
  int i = 0;

  printf("Enter your symbols or # for exit:\n");

  while ((ch = getchar()) != '#')
  {
    printf("%d", ch);
    i++;
    if (i == 7)
    {
      printf("\n");
      i = 0;
    }
  }

  return 0;
}
