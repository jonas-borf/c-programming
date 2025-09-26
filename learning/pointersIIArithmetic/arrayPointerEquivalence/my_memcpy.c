#include <stdio.h>

void *my_memcpy(void *dest, void *src, int byte_count)
{
  char *s = src, *d = dest;

  while (byte_count--) {
    *d++ = *s++;
  }

  return dest;
}

int main(void)
{
  char s[] = "test";
  char t[100];

  my_memcpy(t, s, 5);

  printf("%s\n", t);
}
