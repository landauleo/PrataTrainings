#include <stdio.h>
#define RATE 0.08
#define TAKEOUT 100000

int main (void)
{
  double initsum = 1000000, currentsum = 1000000;
  int years = 0;

  do {
    initsum = currentsum;
    currentsum = initsum - TAKEOUT;
    currentsum += initsum * RATE;
    ++years;
  } while (currentsum >= TAKEOUT);

  printf("Your sum will end up in %d years! Oh GOSH!\n", years);

  return 0;
}
