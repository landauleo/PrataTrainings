#include<stdio.h>

int main(void)
{
  float sum1 = 0, sum2 = 1;
  int counter1, counter2;

  printf("Enter the number of increments:\n");
  scanf("%d", &counter1);

  counter2 = counter1;

  for (int i = 1; counter1 >= i; i++)
  {
    sum1 = 1.00/i + sum1;
  }

  for (int i = 2; counter2 >= i; i++)
  {
    if (i % 2 == 0) {
      sum2 = sum2 - 1.00/i;
    } else {
      sum2 = sum2 - 1.00/i;
    }
  }

  printf("Sum1 equals %f, sum2 equals %f.\n", sum1, sum2);

  return 0;
}
