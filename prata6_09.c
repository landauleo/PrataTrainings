#include <stdio.h>

int main(void)
{
  int upper, lower, sum=0;

    printf("Введите верхний и нижний целочисленные пределы: ");
    scanf("%d %d", &upper, &lower);

    do
  {
    for (int i = upper; i <= lower; i++)
    {
      sum += i*i;
    }
    printf("Сумма квадратов целых чисел от %d до %d равна %d \n", upper*upper, lower*lower, sum);
    sum = 0;
    printf("Введите следующую комбинацию пределов:\n");
    scanf("%d %d", &upper,&lower);
  }while (upper < lower);

  printf("Работа завершена\n");

    return 0;
}
