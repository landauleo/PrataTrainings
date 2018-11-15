#include<stdio.h>
#include<math.h>

int main(void)
{

  int a[8], num = 2;
  double pow = 1;

  for (int i = 0; i < 8; i++)
  {
    for (int j = 1; j <= i+1; j++)
    {
      pow *= num;
    }
    a[i] = pow;
  }

  int j=0;

  do
  {
  printf("%d ", a[j]);
  j++;
  }while (j < 8);
  return 0;

}
