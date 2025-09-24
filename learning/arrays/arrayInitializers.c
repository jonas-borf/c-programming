#include <stdio.h>

int main(void)
{
    int i;
    int a[5] = {22,37,3490,18,95};// Note that the [5] is not neccessary, c can figure it out from a[]

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
}
