#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("hello.txt", "r");

    while((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    printf("\n");

    fclose(fp);
}
