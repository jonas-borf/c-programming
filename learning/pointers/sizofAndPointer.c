#include <stdio.h>

int main(void)
{
    int *p;

    // Prints size of an int
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(p));
    printf("%zu\n", sizeof(*p));
}
