#include <stdio.h>

long* thick_addition(long *a, long *b)
{
  printf("%ld\n", a[0] + b[0]);

  return a;
} 

int main(void)
{
  long x[2] = {1,2};
  long y[2] = {3,4};

  long *a = x;
  long *b = y;
  
  say_hello();
  a = thick_addition(a, b);
}
