#include <stdio.h>

#define MIESIACE  12
#define LATA  4
void sumOfTheYear(int deszcz[LATA][MIESIACE])
{
  int sum[4],i,x;
  for(i=0;i<4;i++)
  {
    sum[i]=0;
    for(x=0;x<12;x++)
    {
      sum[i]=sum[i]+deszcz[i][x];
    }
    printf("Suma roczna %d\n", sum[i]);
  }
}
void averageOfTheYear(int deszcz[LATA][MIESIACE])
{
  int sum,i,x;
  sum=0;
  for(i=0;i<4;i++)
  {
    for(x=0;x<12;x++)
    {
      sum=sum+deszcz[i][x];
    }
  }
  printf("Srednia roczna %d\n", sum/4);
}
void averageOfTheMonth(int deszcz[LATA][MIESIACE])
{
  double sum[4];
  int i,x;
  for(i=0;i<12;i++)
  {
    sum[i]=0;
    for(x=0;x<4;x++)
    {
      sum[i]=sum[i]+deszcz[x][i];
    }
    printf("Srednia miesieczna %lf\n", sum[i]/4);
  }
}
int main ()
{
  int deszcz[LATA] [MIESIACE]= { // dane o opadach są wyrasżone w mm
     {29, 34, 34, 39, 34, 47, 35, 27, 29, 28, 32, 38},  // 2008
     {24, 25, 30, 36, 29, 34, 30, 27, 27, 23, 28, 27},  // 2009
     {31, 36, 41, 42, 35, 43, 35, 30, 34, 31, 33, 37},  // 2010
     {39, 32, 50, 53, 39, 38, 50, 43, 36, 35, 54, 40}  // 2011
   };
   sumOfTheYear(deszcz);
   averageOfTheYear(deszcz);
   averageOfTheMonth(deszcz);
   return 0;
}
