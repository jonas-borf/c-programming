#include <stdio.h>

int main(void)
{
  int a = 0x1a2b;
  int b = 012;
  int x = 0b101010;

  printf("%d\n", x);
  printf("%d\n", a);
  printf("%x\n", a);
  printf("%d\n", b);
  printf("%o\n", b);
}
