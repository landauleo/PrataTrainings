#include<stdio.h>
#include<math.h>

int main(void)
{
  float a[8], b[8], sum = 0;

  printf("Enter 8 numbers\n");

  for (int i = 0; i < 8; i++)
  {
    scanf("%f", &a[i]);
    sum += a[i];
    b[i] = sum;
  }

  for (int i = 0; i < 8; i++)
 {
   printf("%-8.f", a[i]);
 }
 printf("\n");

  for (int i = 0; i < 8; i++)
  {
    printf("%-8.f", b[i]);
  }

  return 0;
}
