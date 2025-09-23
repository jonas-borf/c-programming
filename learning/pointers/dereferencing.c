#include <stdio.h>

int main(void)
{
    int i;
    int *p;

    p = &i;

    i = 10;
    *p = 20;

    printf("%d\n", i);
    printf("%d\n", *p);
}
