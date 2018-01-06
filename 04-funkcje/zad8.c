//znjadz liczbe 1-1000
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

  int getRandomValue()
  {
    int seed,number;
    time_t tt;
    seed = time(&tt);
    srand(seed);
    number = rand()%1000+1;
    return number;
  }
  void play()
  {
    int answer, number;
    number=getRandomValue();
    printf("Zgadnij liczbe z przedzialu do 1 do 1000\n");
    while(1)
    {
      scanf("%d",&answer);
      if(answer==number)
      {
        printf("Gratulacje, zgadles\n");
        break;
      }
      else if(answer>number)
      {
        printf("za duzo\n");
      }
      else if (answer<number)
      {
        printf("za malo\n");
      }
    }
  }
  int main()
  {
    play();
  }
