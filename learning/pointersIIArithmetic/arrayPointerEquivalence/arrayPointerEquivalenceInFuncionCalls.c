#include <stdio.h>

// definition of int my_strlen(char s[]) would
// have worked too

int my_strlen(char *s)
{
  int count = 0;
  char *t = s;
  while(*t != '\0')
  {
    count++;
    t++;
  }

  return count;
}

int main(void)
{
  char s[] = "Antelopes!";
  char *t = "Wombats!";

  printf("%d\n", my_strlen(t));
  printf("%d\n", my_strlen(s));

}
