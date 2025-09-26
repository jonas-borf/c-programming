#include <stdio.h>

int myStrLen(char *s)
{
  char *p = s;

  while (*p != '\0')
    p++;

  return p - s;
}

int main(void)
{
  printf("%d\n", myStrLen("Hello Mom!"));
}
