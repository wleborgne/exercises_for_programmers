#include <stdio.h>
#include <string.h>

int main()
{
  int max_name = 64;
  char name[max_name];

  printf("What is your name? ");
  fgets(name, max_name - 1, stdin);

  name[strcspn(name, "\r\n")] = 0; // alter the string to terminate at the newline

  printf("Hello, %s, nice to meet you!\n", name);
}
