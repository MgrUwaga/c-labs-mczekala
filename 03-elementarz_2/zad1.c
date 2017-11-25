//1 + 2 + 3 +...+ n >= M
#include <stdio.h>

int main() 
{
  int M,n,suma;
  suma = 0;
  n = 0;
  
  printf("Podaj liczbe M: ");
  scanf("%d", &M);
  
  while (suma < M) 
  {
     n++;
     suma=suma+n;
  }
  
  printf("Szukane n to: %d\n", n);
  return 0;
}
