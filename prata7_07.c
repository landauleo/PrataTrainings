#include <stdio.h>
#define PERHOUR 10.00
#define OVERWORK 15.00
#define FIRST300 0.15
#define NEXT150 0.20
#define REST 0.05

int main(void)
{
  float salary, taxsalary;
  int hours;

  printf("Enter your worktime per week: ");
  scanf("%d", &hours);

  if (hours > 40)
  {
    salary = 40 * PERHOUR + ((hours - 40) * OVERWORK);
  }
  else
  {
    salary = hours * PERHOUR;
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

  return 0;

}
