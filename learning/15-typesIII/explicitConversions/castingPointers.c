#include <stdio.h>

int main(void)
{
  int x = 3490;
  int *p = &x;

  printf("%p\n", p); // Supposadly, this could give errors
  printf("%p\n", (void *)p); // This is better
}
