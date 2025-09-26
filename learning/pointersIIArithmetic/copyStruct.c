#include <stdio.h>

int main(void)
{
  struct antelope {
    char s[];
  };

  struct antelope my_antelope;
  struct antelope my_clone_antelope;

  my_antelope.s = "I am an antelope";


  memcpy(my_clone_antelope, my_antelope, sizeof(my_antelope));

  printf("%s\n", my_clone_antelope.s);
}
