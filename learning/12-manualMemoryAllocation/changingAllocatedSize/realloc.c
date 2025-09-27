#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float *p = malloc(sizeof(*p) * 20);

  for (int i = 0; i < 20; i++)
    p[i] = i / 20.0;

  float *new_p = realloc(p, sizeof(*p) * 40);

  if (new_p == NULL) {
    printf("erro reallocating\n");
    return 1;
  }

  p = new_p;

  for (int i = 20; i < 40; i++)
    p[i] = 1.0 + (i - 20) / 20.0;
  
  for (int i = 0; i < 40; i++)
    printf("%f\n", p[i]);

  free(p);
}
