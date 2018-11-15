#include<stdio.h>
#include<string.h>

int main(void)
{
  char a[255];
  char ch;
  int i = 0, letters, status = 1;

  printf("Enter your word: ");

  while (status == 1)
  {
    scanf("%c", &a[i]);
    i++;
    status = scanf("%ch", &a[i);
  }
  letters = strlen(a);

  for (i = letters; i > 0; i--)
  {
    printf("%ch", a[i]);
  }
  printf("\n");

  return 0;

}
