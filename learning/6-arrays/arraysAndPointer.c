#include <stdio.h>

int main(void)
{
    int a[5] = {11,22,33,44,55};
    int *p;

    //p = &a[0];
    p = a; // this is the same as above

    printf("%d\n", *p);

}
