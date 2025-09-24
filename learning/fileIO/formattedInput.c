#include <stdio.h>

int main(void)
{
    FILE *fp;
    char s[1024];
    float lenght;
    int mass;

    fp = fopen("whales.txt", "r");

    while(fscanf(fp, "%s $f $d", s, &))
}
