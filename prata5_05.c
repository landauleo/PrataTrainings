#include <stdio.h>

int main(void) {

  int count, sum, n;

  printf("Введите макс. значение: ");
  scanf("%d", &n);
  count = 0;
  sum = 0;

  while (count++ < n)
    sum = sum + count;
  printf("сумма = %d\n", sum);

  return 0;
}
