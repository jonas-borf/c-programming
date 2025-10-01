#include <stdio.h>

int main(void)
{
  char s[10];
  float f = 3.14159;

  // convert f to string

  snprintf(s, 10, "%f", f);

  printf("String value: %s\n", s);
}
