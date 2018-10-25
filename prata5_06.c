#include <stdio.h>

int main(void) {

  int sum, count, n;

  printf("Введите макс. значение: ");
  scanf("%d", &n);
  sum = 0;
  count = 0;

  while (count++ < n)
    sum = count * count;
  printf("сумма квадратов = %d\n", sum);

  return 0;
}
