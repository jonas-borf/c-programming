#include <stdio.h>

int main(void)
{
    FILE *fp;
    char s[1024];
    float length;
    int mass;

    fp = fopen("whales.txt", "r");

    while(fscanf(fp, "%s $f $d", s, &length, &mass) != EOF)
    {
        printf(")
    }
}
