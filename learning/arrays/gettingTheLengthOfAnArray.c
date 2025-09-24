#include <stdio.h>

int main(void)
{
    int x[12];

    printf("%zu\n", (sizeof x)/sizeof(int)); // note that this only works in this kind of case
                                             // if you are passing an array into a function, 
                                             // it passes the pointer which has a sizeof the 
                                             // pointer and not the sizeof the list
}
