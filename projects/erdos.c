#include <stdio.h>

long long factorial(int n)
{

  if (n < 1)
    return 0;
  if (n == 1)
    return 1;

  return n * factorial(n - 1);

}

int main(void)
{
  int N = 70;

  long long factorials[N];
  
  for (int i = 0; i < 70; i++)
    factorials[i] = factorial(i + 1);

  for (int i = 0; i < 70; i++) {
    printf("%d\n", factorials[i]);
  }
}
