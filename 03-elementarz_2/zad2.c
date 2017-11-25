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

  printf("Podana liczba '%d' jest %s\n", n, jest_pierwsza ? "pierwsza" : "złożona");
  return 0;
}
