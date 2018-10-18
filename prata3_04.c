#include <stdio.h>

int main(void)
{
  float num;

  printf("Введите любое большое число:\n");
  scanf("%f", &num);

  printf("\nВведено число %f или %e.\n", num, num);

  return 0;
}
