#include <stdio.h>
#include <math.h>

int main(void)
{
  double k = 5.0;
  double z = 64.0 * log(2.0) / 5.0;
  double *p;
  p = &z;
  double power = exp(*p);

}
