#include <stdio.h>
#include <math.h>

double givePower(double exponent)
{
  return exp(exponent);
}

int main(void)
{
  printf("%d\n", pow(999, 9));
}
