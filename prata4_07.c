#include <stdio.h>
#define L 3.872
#define KM 1.609

int main(void)
{
   float miles, petrol;

   printf("Введите кол-ва преодолённых миль:\n");
   scanf("%f", &miles);
   printf("Введите кол-ва галлонов израсходованного бензина:\n");
   scanf("%f", &petrol);
   printf("Количество миль на 1 галлон горючего составляет %.1f\n", miles/petrol);
   printf("Количество литров на 100 километров составляет: %.1f\n", (miles*KM*100)/(petrol*L));

   return 0;

}
