//wartosc wsk+1 i wsk+3
#include <stdio.h>

int main ()
{
  int *wsk;
  int tab[2][2] = {{12, 14}, {16}};
  wsk = tab[0];
  printf("%d %d\n", *(wsk+1), *(wsk+3));
}
