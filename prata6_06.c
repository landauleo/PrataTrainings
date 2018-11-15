#include <stdio.h>
#include <string.h>

int main(void)
{
  char word[10];
  int size, i = 0;

  printf("Enter your word: \n");

  while (scanf("%c", &word[i]) && (word[i] != '\n'))
  {
    i++;
  }
  word[i] = '\0';

  size = strlen(word);

  printf("Backwards equals: ");
  for (i = size - 1; i >= 0; i--)
  {
    printf("%c", word[i]);
  }

  printf("\n");

  return 0;
}
