#include <stdio.h>

void cube(double a);
int main(void) {

  double a;
  printf("Введите величину типа float: ");
  scanf("%lf", &a);
  cube(a);

  return 0;
}
void cube(double a) {

  printf("Куб %.2f равен %.2f.\n", a, a*a*a);
}
