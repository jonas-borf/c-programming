#include <stdio.h>
#include <unistd.h>

int main(void)
{

  int botNum = 0;
  printf("Creating VirusBot...\n Blowing up your computer in:");

  for (int i = 5; i >= 0; i--) {
    printf("%d\n", i);
    sleep(1);
  }

  while(true) {

    if (botNum % 10000 == 0)
      printf("bot number %d created, frying circuits\n", botNum);
    botNum++;
  }
}
