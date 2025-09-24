#include <stdio.h>

int main(void)
{
    int i;
    int a[5] = {22,37,3400,18,95};

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]); // this outputs rubbish after the first bit. Because of this, it is important to try and
                              // prevent this if at all possible. `:wq

    }
}
