#include <stdio.h>
#include <math.h>

unsigned long long power(int base, int exponent)
{
  if (exponent == 1)
    return base;

  return base * power(base, exponent - 1);
}

unsigned long long factorial(int n)
{
  if (n == 1)
    return 1;

  return n * factorial(n - 1);

}

int main(void)
{
  int N = 50;

  unsigned long long factorials[N];
  
  for (int i = 0; i < N; i++)
    factorials[i] = factorial(i + 1);
  
  for(int k = 3; k < 10; k++) {
    //int upper_bound = exp(64*log(2)/k)/2;
    int upper_bound = 1000;

    for (int x = 2; x < upper_bound; x++) {
      for (int y = x; y < upper_bound; y++) {
        unsigned long long powx = pow(x, k);
        unsigned long long powy = pow(y, k);
        unsigned long long sum = powx + powy;
        unsigned long long diff = powy - powx;
        for (int i = 1; i < N; i++) {
          if (sum == factorials[i])
            printf("sum (n, x, y, k) = (%d, %d, %d, %d)\n", i + 1, x, y, k);
          
          if (diff == factorials[i])
            printf("diff (n, x, y, k) = (%d, %d, %d, %d)\n", i + 1, x, y, k);
        }
      }
    }
  }

}
