#include <stdio.h>

int main(void) {

  int num;

  printf("Enter the number in inches.\n");
  scanf("%d", &num);

  printf("%d in. equals %.2f sm.\n", num, 2.54*num);

  return 0;

}
