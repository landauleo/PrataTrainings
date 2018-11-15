#include <stdio.h>

int main(void)
{
  char main;
  int spacecounter = 10, doublespacecounter;

  printf("Enter your letter\n");
  scanf("%c", &main);

  for(char firstlast = 'A'; firstlast <= main; firstlast++, spacecounter--)
  {
    doublespacecounter = spacecounter;
    while(doublespacecounter >= 0)
    {
      printf("_");
      doublespacecounter--;
    }
    for (char first = 'A'; first < firstlast; first++)
      printf("%c", first);
    for (char first = firstlast; first >= 'A'; first--)
      printf("%c", first);
    printf("\n");
  }

  return 0;
}
