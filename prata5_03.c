#include <stdio.h>
#define D_IN_W 7

int main(void)
{
  int day, week;

  printf("Введите значение в днях:\n");
  scanf("%d", &day);

  while (day > 0)
  {
  printf("%d дн. составляют %d нед. и %d дн.\n", day, day/D_IN_W, day%D_IN_W);
  printf("Bвeдитe следующее значение (<=О для выхода):\n");
  scanf("%d", &day);
  }
  return 0;
}
