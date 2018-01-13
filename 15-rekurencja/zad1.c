//Napisać rekurencyjną implementację funkcji obliczającej nk (n do potęgi k).
#include <stdio.h>
int getFactorial(int number);
int main(int argc, char const *argv[])
{
  int number;
  scanf("%d",&number);
  printf("%d\n",getFactorial(number));
}
int getFactorial (int number)
{
  int factorial;
  if (number<0) return 0;
  if (number==0 || number==1) return 1;
  factorial = number*getFactorial(number-1);
  return factorial;
}
