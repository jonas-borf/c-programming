#include <stdio.h>

int my_strlen(char *s)
{
    int count = 0;

    while(s[count] != '\0')
    {
        count++;
    }

    return count;
}

int main(void)
{
    char *mystr = "hello mom!";

    printf("%d\n", my_strlen(mystr));
}
