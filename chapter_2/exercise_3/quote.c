#include <stdio.h>
#include <string.h>

int main()
{
  const int max_input = 256;
  const char newline_chars[] = "\r\n";

  char quote[max_input];
  char who[max_input];

  printf("What is the quote? ");
  fgets(quote, max_input - 1, stdin);
  quote[strcspn(quote, newline_chars)] = 0;

  printf("Who said it? ");
  fgets(who, max_input - 1, stdin);
  who[strcspn(who, newline_chars)] = 0;

  printf("%s says, \"%s\"\n", who, quote);
}
