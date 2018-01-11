// wypisuje liczbe min i max z ciagu
#include <stdio.h>

void sort( int tab[],int size)
{
  int i,max,min;
  min=tab[0];
  max=tab[0];
  for(i=1;i<size;i++)
  {
    if(tab[i]>max)
    {
      max=tab[i];
    }
    else if(tab[i]<min)
    {
      min=tab[i];
    }
  }
  printf("%d %d\n",min,max);
}
int main()
{
  int tab[]={15,24,3,14};
  sort(tab,sizeof(tab)/4);
  return 0;
}
