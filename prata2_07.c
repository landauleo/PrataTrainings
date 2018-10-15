#include <stdio.h>

void one_three(void);
void two(void); //объявляем ф-ю

void one_three(void) { //определяем ф-ю
  printf("%s\n", "один");
  two();
  printf("%s\n", "три" );
}

void two(void) {
  printf("%s\n", "два");
}

int main(void) {
  printf("%s\n", "начать сейчас:");
  one_three();
  printf("%s\n", "порядок!");
}
