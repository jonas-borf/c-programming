#include <stdio.h>

int main(void)
{
  char a = 'X';

  void *p = &a;
  char *q = p;
  
  //printf("%c\n", *p); This gives error
  printf("%c\n", *q);
}
