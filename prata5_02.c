#include <stdio.h>

int main(void)
{
  int a;

  printf("Введите число:\n");
  scanf("%d", &a);

  int b = a + 10;

  while(a <= b)
  {
  printf("%d ", a);
  ++a;
  }
  return 0;
}
