//oblicza współczynnik Newtona n po k
#include <stdio.h>

int factorial(int number);
int binomialCoefficient();
int main(int argc, char const *argv[])
{
  int n,k;
  scanf("%d %d",&n,&k);
  binomialCoefficient(n,k);
}
int factorial (int number)
{
  int score;
  if (number<0) return 0;
  if (number==0 || number==1) return 1;
  score = number*factorial(number-1);
  return score;
}
int binomialCoefficient(int n,int k)
{
  int score = factorial(n)/(factorial(k)*factorial(n-k));
  printf("%d",score);
  return k;
}
