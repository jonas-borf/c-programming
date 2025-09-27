#include <stdio.h>

int main(void)
{
    int i;
    float f[4]; // Declare an array of 4 floats

    f[0] = 3.14159;
    f[1] = 1;
    f[2] = 2;
    f[3] = 3;

    for (i = 0; i < 4; i++)
    {
        printf("%f\n", f[i]);
    }
}
