#include <stdio.h>

int main()
{
  int max_name = 64;
  char name[max_name];

  printf("What is your name? ");
  fgets(name, max_name - 1, stdin);
  printf("Hello, %s, nice to meet you!", name);
}
