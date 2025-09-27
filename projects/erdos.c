#include <stdio.h>
#include <math.h>

unsigned long long factorial(int n)
{
  if (n == 1)
    return 1;

  return n * factorial(n - 1);

}

int main(void)
{
  int N = 70;

  unsigned long long factorials[N];
  
  for (int i = 0; i < 70; i++)
    factorials[i] = factorial(i + 1);
  
  for(int k = 3; k < 10; k++) {
    for (int x = 1; x < 1000; x++) {
      for (int y = x; y < 1000; y++) {

        unsigned long long sum = pow(x, k) + pow(y, k);
        unsigned long long diff = pow(y, k) - pow(x, k);
        for (int i = 0; i < 70; i++) {
          if (sum == factorials[i])
            printf("sum (N, x, y, k) = (%d, %d, %d, %d)\n", i, x, y, k);
          
          if (diff == factorials[i])
            printf("diff (N, x, y, k) = (%d, %d, %d, %d)\n", i, x, y, k);
        }
      }
    }
  }

}
