//oblicza nwd
#include<stdio.h>
int nwd();
int main(int argc, char const *argv[])
{
  int a,b;
  scanf("%d %d\n",&a,&b);
  printf("%d\n",nwd(a,b));
}
int nwd(int a,int b)
{
    int c;

    if(b != 0)
    {
      c = a % b;
      a=nwd(b,c);
    }
    return a;
}
