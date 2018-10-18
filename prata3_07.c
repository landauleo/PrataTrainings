#include <stdio.h>

int main(void)
{
  int cm;

  printf("Введите ваш рост в см:\n");
  scanf("%d", &cm);
  printf("Ваш рост в дюймах составляет: %.2f дюймов.\n", cm*2.54);

  return 0;
}
