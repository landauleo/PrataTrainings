#include <stdio.h>

int main(void)
{
  const int row = 5;
  char ch = '$';
  int counter = 1;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < (i + 1); j++)
      printf("%c", ch);
    printf("\n");
  }
  return 0;
}
