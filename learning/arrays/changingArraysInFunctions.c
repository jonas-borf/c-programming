#include <stdio.h>

void double_array(int *a, int len)
{
    for (int i; i < len; i++)
    {
        a[i] *= 2;
    }
}


int main(void)
{
    int x[5] = {1,2,3,4,5};

    double_array(x, 5);

    for (int i; i < 5; i++)
    {
        printf("%d\n", x[i]);
    }
}
