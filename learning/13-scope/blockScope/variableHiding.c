#include <stdio.h>

int main(void)
{
  int i = 10;

  {
    int i = 20;

    printf("%d\n", i);
  }

  printf("%d\n", i);
}
