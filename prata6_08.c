#include <stdio.h>

void Calculating (float a, float b);

int main(void)
{
  float a, b;
  int status = 1;

  printf("Enter 2 numbers: \n");
  scanf("%f %f", &a, &b);

  do
  {
    Calculating (a, b);
    printf("Enter next 2 numbers: \n");
    scanf("%f %f", &a, &b);
    status = scanf("%f %f", &a, &b);
  } while (status == 1);

  return 0;
}

void Calculating (float a, float b)
{
  printf("%.2f\n", (a - b)/(a*b));
}
