#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  for (unsigned char i = 0; i != 255; i++) {
    printf("%c : %d\n", i, i);
  }
}
