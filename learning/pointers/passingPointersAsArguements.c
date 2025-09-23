#include <stdio.h>

void increment(int *p)
{
    *p = *p +1;
}

int main(void)
{
    int i = 10;
    int *j = &i;

    printf("%d\n", i);
    printf("%d\n", *j);

    increment(j);

    printf("%d\n", i);
}
