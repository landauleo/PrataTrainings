#include <stdio.h>

int main(void)
{
  int space = 0, line = 0, others = 0;
  char ch;

  printf("Enter your symbols or # for exit:\n");
  scanf("%c", &ch);

  while (ch != '#')
  {
    switch (ch)
    {
      case '\n' :
        line++; //++line
        break;
      case ' ' :
        space++;
        break;
      default :
        others++;
    } scanf("%c", &ch);
  }
  printf("Lines: %d, spaces: %d, others; %d\n", line, space, others);

  return 0;
}
