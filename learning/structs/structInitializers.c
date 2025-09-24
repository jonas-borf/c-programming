#include <stdio.h>

int main(void)
{
    struct car {
        char *name;
        float price;
        int speed;
    };

    struct car saturn = {"Saturn SL/2", 16000.99, 175};

    
    printf("Name:   %s\n", saturn.name);
    printf("Price:  %f\n", saturn.price);
    printf("Speed:  %d\n", saturn.speed);
    
    

}
