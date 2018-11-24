#include <stdio.h>

int main(void)
{
  int num, even = 0, uneven = 0, evensum = 0, unevensum = 0, status, a, b;

  printf("Enter your numbers or 0 for exit:\n");
  scanf("%d", &num);


  while (num != 0)
  {
    if (num % 2 == 0)
    {
      status = 'a';
    }
    else
    {
      status = 'b';
    }
    switch(status)
    {
      case 'a' :
        even++;
        evensum += num;
        break;
      case 'b' :
        uneven++;
        unevensum += num;
        break;
    }
    scanf("%d", &num);
  }

  printf("Even numbers: %d, uneven numbers: %d, evensum: %d, unevensum: %d\n", even, uneven, evensum, unevensum);

  return 0;

}
