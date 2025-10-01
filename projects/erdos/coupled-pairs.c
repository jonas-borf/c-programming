#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

int is_k_couple_sum(int k, int x, int y)
{
  long powx = pow(x, k);
  long powy = pow(y, k);
  long sum = powx + powy;

  for (int i = 0; i < 25; i++) {
    if (sum % (long)pow(primes[i], k) == 0)
      return 1;
  }

  return 0;
}

int is_k_couple_diff(int k, int x, int y)
{
  long powx = pow(x, k);
  long powy = pow(y, k);
  long diff = labs(powx - powy);

  for (int i = 0; i < 25; i ++) {
    if (diff % (long)pow(primes[i], k) == 0)
      return 1;
  }

  return 0;
}

int is_k_couple(int k, int x, int y)
{
  if (is_k_couple_sum(k, x, y) == 0 && is_k_couple_diff(k, x, y) == 0)
    return 0;
  return 1;
}

int list_coupled_pairs(int k, int  x, int y)
{
  
}

int main(void)
{
  int x = 1;
  int y = 7;
  int k = 3;

  list_coupled_pairs(k, x, y);
}
