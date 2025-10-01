#include <stdio.h>

int main(void)
{
  int x = 10;

  void *p = &x;

  int *q = p;

  printf("%d\n", *q);
}
