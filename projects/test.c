#include <stdio.h>
#include <math.h>

double givePower(double exponent)
{
  return exp(exponent);
}

int main(void)
{
  double var = 10;

  printf("%f\n", givePower(10));
}
