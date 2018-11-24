#include <stdio.h>
#define PERHOUR3 10.00
#define PERHOUR1 8.75
#define PERHOUR2 9.33
#define PERHOUR4 11.20
#define OVERWORK 15.00
#define FIRST300 0.15
#define NEXT150 0.20
#define REST 0.05

int main(void)
{
  float salary, taxsalary, perhour;
  int number, hours;

  printf("Введите число, соответствующее предпочитаемой ставке заработной платы или действию: \n");
  printf("1) $8.75/час           ");
  printf("2) $9.33/час\n");
  printf("3) $10.00/час          ");
  printf("4) $11.20/час\n");
  printf("5) выход \n");
  scanf("%d", &number);

  while (number != 5)
  {
    switch(number)
    {
      case 1 :
        perhour = PERHOUR1;
        break;

      case 2 :
        perhour = PERHOUR2;
        break;

      case 3 :
        perhour = PERHOUR3;
        break;

      case 4 :
        perhour = PERHOUR4;
        break;

      default :
          printf("Mind your input and try again!\n");
          break;
      }

    if (number >= 1 && number <= 5)
    {
      printf("Enter your worktime per week: ");
      scanf("%d", &hours);

      if (hours > 40)
      {
        salary = 40 * perhour + ((hours - 40) * OVERWORK);
      }
      else
      {
        salary = hours * perhour;
      }

      if (salary > 300)
      {
        if ((salary - 300) > 150)
        {
            taxsalary = salary - (300 * FIRST300 + 150 * NEXT150 + (salary - 450) * REST);
        }
        else
        {
          taxsalary = salary - (300 * FIRST300 + (salary - 300) * NEXT150);
        }
      }
      else
      {
      taxsalary = salary - salary * FIRST300;
      }

      printf("Your salary without tax deductions: %.2f $; with tax deductions: %.2f $\n", salary, taxsalary);
      printf("Print next number: ");
    } scanf("%d", &number);
  }

  return 0;

}
