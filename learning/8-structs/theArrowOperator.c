#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

void set_price(struct car *c, float new_price)
{
    c->price = new_price; // this is the less ugly way
}

int main(void)
{
    struct car saturn = {.speed=175, .name="Saturn SL/2"};

    set_price(&saturn, 799.99);

    printf("%f\n", saturn.price);
}
