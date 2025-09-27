#include <stdio.h>
#include <math.h>

int main(void)
{
  double k = 5;
  double z = 64 * log(2) / k;
  double power = exp(z);
  printf("%f\n", power);

}
