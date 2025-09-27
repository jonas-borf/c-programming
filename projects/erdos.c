#include <stdio.h>

unsigned long long pow(int base, int exponent)
{
  if (exponent == 1)
    return base;

  return base * pow(base, exponent - 1);
}

unsigned long long factorial(int n)
{
  if (n == 1)
    return 1;

  return n * factorial(n - 1);

}

int main(void)
{
  int N = 64;

  unsigned long long factorials[N];
  
  for (int i = 0; i < N; i++)
    factorials[i] = factorial(i + 1);
  
  for(int k = 3; k < 10; k++) {
    for (int x = 1; x < 1000; x++) {
      for (int y = 2; y < 1000; y++) {
        
        unsigned long long sum = pow(x, k) + pow(y, k);
        unsigned long long diff = pow(y, k) - pow(x, k);
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
