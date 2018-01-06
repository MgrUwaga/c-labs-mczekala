//test umiejetnosci mnozenia z roznymi komentarzami
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int testMultiply()
{
  int answer, number1,number2,seed;
  time_t tt;
  seed = time(&tt);
  srand(seed);
  number1 = rand()%100+1;
  number2 = rand()%100+1;
  printf("oblicz %d * %d\n",number1,number2);
  scanf("%d",&answer);
  if((number1*number2) == answer)
  {
    switch (rand()%3+1)
    {
      case 0:
        printf("Bardzo dobrze!");
        break;
      case 1:
        printf("Świetnie");
        break;
      case 2:
        printf("Dobra robota!");
        break;
    }
    return 1;
  }
  else
  {

    switch (rand()%3)
    {
      case 0:
        printf("Zła odpowiedź");
        break;
      case 1:
        printf("Oj, niedobrze");
        break;
      case 2:
        printf("Następnym razem może pójdzie Ci lepiej");
        break;
    }

    return 0;
  }

}
int main()
{
  int i,answers,correctAnswers;
  for(i=0;i<5;i++)
  {
    answers = testMultiply();
    if (answers==1)
      correctAnswers++;
    printf("\n");
  }
  printf("poprawne:%d niepoprawne:%d\n",correctAnswers, 5-correctAnswers);
  return 0;
}
