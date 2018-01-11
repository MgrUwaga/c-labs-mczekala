//inicjalizaja tablicy

#include <stdio.h>

void intialize(int tab[],int *value)
{
  int i,x;
  for(i=0;i<512;i++)
  {
    tab[i]=*value;
  }
}

int main()
{
  int tab[512];
  int value;
  value=128;
  
  intialize(tab,&value);
  return 0;
}
