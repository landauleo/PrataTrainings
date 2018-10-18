#include <stdio.h>

int main(void)
{
  int age;

  printf("Введите свой возраст в виде десятичного числа:\n");
  scanf("%d", &age);
  printf("Ваш возраст в секундах составляет %e\n", age*3.156e7);

  return 0;
}
