#include <stdio.h>

void Temperatures(double f);

int main (void)
{
  float f;
  int status = 1;
  printf("Введите температуру по Фаренгейту: \n");
  scanf("%f", &f);

  while (status == 1) {
    Temperatures(f);
    printf("Bвeдитe следующее значение (любое нечисловое значение для выхода): ");
    status = scanf("%f", &f);
  }

  return 0;
}
void Temperatures(double f)
{
  const float C_IN_F =  5*(f - 32)/9;
  const float K_IN_F = 5*(f - 32)/(9 + 273.15);

  printf("%.2f° по Фаренгейту = %.2f° по Цельсию = %.2f° по Кельвину\n", f, C_IN_F, K_IN_F);
}
