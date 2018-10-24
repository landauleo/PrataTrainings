#include <stdio.h>

int main(void)
{
  float num;

  printf("Введите число:\n");
  scanf("%f", &num);

  printf("\n Вводится %.3f или %.3e.\n", num, num);

  return 0;
}
