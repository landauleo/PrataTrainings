#include<stdio.h>

int main(void)
{
  int num, divider, counter;

  printf("Enter your number: ");
  scanf("%d", &num);

  while (num >= 2)
  {
    for (divider = 1; divider <= num; divider++)
    {
      if (num % divider == 0)
      {
        counter++;
      }
    }
    if (counter == 2)
    printf("%d ", num);

    counter = 0;
    num--;
  }

  return 0;
}
