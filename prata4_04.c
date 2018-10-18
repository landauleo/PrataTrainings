#include <stdio.h>
int main(void)
{

  float height;
  char name[40];

  printf("Введите свой рост в дюймах: ");
  scanf("%f", &height);
  printf("Введите своё имя: ");
  scanf("%s", name);
  printf("%s, ваш рост составляет %.3f футов\n", name, height / 12.0);

  return 0; 
}
