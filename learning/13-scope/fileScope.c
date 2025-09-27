#include <stdio.h>

int shared = 10;

void func1(void)
{
  shared += 100;
}

void func2(void)
{
  printf("%d\n", shared);
}

int main(void)
{
  func1();
  func2();
}
