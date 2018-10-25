#include <stdio.h>
#define C_IN_I 0.39
#define C_IN_F 0.03

int main(void)
{
  float c;

  printf("Введите значение в см: ");
  scanf("%f", &c);

  while (c > 0)
  {
  printf("%.2f см = %.2f футов, %.2f дюймов\n", c, c*C_IN_F, c*C_IN_I);
  printf("Bвeдитe следующее значение (<=О для выхода): ");
  scanf("%f", &c);
  }
  printf("Работа завершена\n");
  return 0;
}
