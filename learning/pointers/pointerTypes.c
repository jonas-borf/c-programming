#include <stdio.h>

int main(void)
{
    int i;
    int *p;

    p = &i;

    printf("%p\n", p);
}
