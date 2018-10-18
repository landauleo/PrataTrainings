#include <stdio.h>

int main(void)
{
  int num;

  printf("Введите какое-либо значение, например 66, чтобы увидеть какому символу оно соответствует в ASCII.\n");
  scanf("%d", &num);
  printf("Значение %d является кодом символа %c.\n", num, num);

  return 0;
}
