#include <stdio.h>
#include <unistd.h>

int main(void)
{
  printf("Creating VirusBot...\n Blowing up your computer in:");

  for (int i = 5; i >= 0; i--) {
    printf("%d\n", i);
    sleep(1);
  }
}
