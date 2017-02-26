#include <stdio.h>
#include <string.h>

int main()
{
  int max_input = 64;
  char input[max_input];
  int size = 0;

  printf("What is the input string? ");
  fgets(input, max_input - 1, stdin);

  // Strip the newline from the input
  input[strcspn(input, "\r\n")] = 0;

  size = strlen(input);

  printf("%s has %i characters.\n", input, size);
}
