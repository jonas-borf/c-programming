#include <stdio.h>

int main(void)
{
  struct antelope {
    int copy_this;
  };

  struct antelope my_antelope;
  struct antelope my_clone_antelope;

  my_antelope.copy_this = 67;


  memcpy(&my_clone_antelope, &my_antelope, sizeof(my_antelope));

  printf("%d\n", my_clone_antelope.copy_this);
}
