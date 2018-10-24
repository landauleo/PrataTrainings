#include <stdio.h>
#define S_IN_M 60

int main(void)
{
  int min, hour;

  printf("Введите значение в минутах:\n");
  scanf("%d", &min);

  while (min > 0)
  {
  printf("%d мин. - это %d ч. и %d мин.\n", min, min/S_IN_M, min%S_IN_M);
  printf("Bвeдитe следующее значение (<=О для выхода):\n");
  scanf("%d", &min);
  }
  return 0;
}
