#include <stdio.h>

int main( void )
{
  char a[26];

  for (int i = 0; i < 26; i++)
    a[i] = 'a' + i;

  for (int i = 0; i < 26; i++) 
    printf("%c", a[i]);
  printf("\n");

  return 0;
}
