// oblicza liczbe doskonala
#include <stdio.h>

int getSumOfDividers(int number)
{
  int sumOfDividers=0;
  int i;
  for(i=1;i<number;i++)
  {
    if((number%i)==0)
    {
      sumOfDividers=sumOfDividers+i;
    }
  }
  return sumOfDividers;
}

void printPerfectNumbers(int end)
{
  int number;
  for(number=1;number<end;number++)
  {
    if(number==getSumOfDividers(number))
    {
      printf("%d ",number);
    }
  }
}

int main()
{
  printPerfectNumbers(10000);
  return 0;
}
