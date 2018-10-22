#include <stdio.h>

int main(void)
{

  int size;
  char name[20];

  printf("Введите своё имя: ");
  scanf("%s", name);

  printf("\"%s\"\n", name);
  printf("\"%20s\"\n", name);
  printf("\"%-20s\"\n", name);
  printf("%23s\n", name);

return 0;
}
