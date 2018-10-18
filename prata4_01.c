#include <stdio.h>

int main(void)
{

  char name[40]; char surname[40];
  printf("Введите своё имя: ");
  scanf("%s", name);
  printf("Введите свою фамилию: ");
  scanf("%s", surname);
  printf("%s, %s\n", surname, name);

return 0;
}
