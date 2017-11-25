//sprawdza czy podana liczba całkowita jest pierwsza.
#include <stdio.h>

int main()
{
  int n,jest_pierwsza,dzielnik;
  dzielnik=2;
  n=0;
  jest_pierwsza=1;

  printf("Podaj liczbe calkowita: ");
  scanf("%d",&n);
  
  while(dzielnik<n)
  {
    if((n%dzielnik)==0)
    {
      jest_pierwsza=0;
      break;
    }
    dzielnik++;
  }
  
  if(n<1)
  {
    jest_pierwsza=0;
  }
  
  printf("Podana liczba '%d' jest %s\n", n, jest_pierwsza ? "pierwsza" : "złożona");
  return 0;
}
