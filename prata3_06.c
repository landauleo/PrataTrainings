#include <stdio.h>

int main(void)
{
  float volume;

  printf("Введите значение объёма воды в квартах:\n");
  scanf("%f", &volume);
  printf("Количество молекул воды в %f квратах равно %f\n", volume, volume*950/3.0e-23);

  return 0;
}
