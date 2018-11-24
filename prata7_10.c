#include<stdio.h>
#define SINGLE 17850
#define FAMILYPERSON 23900
#define JOINTHOUSEHOLD 29750
#define SEPARATEHOUSEHOLD 14875
#define FIRST 0.15
#define SECOND 0.28


int main(void)
{
  float salary, tax;

  int category;

  printf("Enter number of your category: \n");
  printf("1) Single\n");
  printf("2) Family person\n");
  printf("3) Married with joint household\n");
  printf("4) Married with separate household\n");
  printf("5) exit \n");

  scanf("%d", &category);

  while(category != 5)
  {
    printf("Enter your salary: \n");
    scanf("%f", &salary);

    switch(category)
    {
      case 1 :
        if (salary > SINGLE)
        {
          tax = (salary - SINGLE) * SECOND + SINGLE * FIRST;
        }
        else
        {
          tax = salary * FIRST;
        }break;

      case 2 :
        if (salary > FAMILYPERSON)
        {
          tax = (salary - FAMILYPERSON) * SECOND + FAMILYPERSON * FIRST;
        }
        else
        {
          tax = salary * FIRST;
        }break;

      case 3 :
        if (salary > JOINTHOUSEHOLD)
        {
          tax = (salary - JOINTHOUSEHOLD) * SECOND + JOINTHOUSEHOLD * FIRST;
        }
        else
        {
          tax = salary * FIRST;
        }break;

      case 4 :
        if (salary > SEPARATEHOUSEHOLD)
        {
          tax = (salary - SEPARATEHOUSEHOLD) * SECOND + SEPARATEHOUSEHOLD * FIRST;
        }
        else
        {
          tax = salary * FIRST;
        }break;

        default :
        printf("Wrong number, try again.\n");
        break;
    }
    if (category >= 1 && category < 5)
    {
      printf("Your tax is %.2f\n", tax);
      printf("Enter next number of the category or 5 for exit\n");
    }   scanf("%d", &category);
  }
  return 0;
}
