#include <stdio.h>
#include <string.h>

int main(void)
{

  char name[10], surname[10];
  int sizeName, sizeSurname;
  // sizeName = strlen (name);
  // sizeSurname = strlen (surname);

  printf("Введите имя: \n");
  scanf("%s",name);
  printf("\nВведите фамилию: \n");
  scanf("%s", surname);
  sizeName = strlen (name);
  sizeSurname = strlen (surname);
  printf("%10s %10s\n", name, surname);
  printf("%10d %10d\n", sizeName , sizeSurname);
  printf("%-10s %-10s\n", name, surname);
  printf("%-10d %-10d\n", sizeName, sizeSurname);

  return 0;

}
