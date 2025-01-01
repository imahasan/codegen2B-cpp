#include <stdio.h>
#include <string.h>

int print_string(const char *input) {
  int i;
  int len = strlen(input);
  for (i = 0; i < len; i++) {
    printf("%c", input[i]);
  }
  return len;
}

int main()
{
    
    return 0;
}