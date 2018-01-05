//wyswietl prostokat owal strzalke diament

#include <stdio.h>

void printRectangle()
{
  int h,w,height,width;
  puts("Podaj rozmiar prostokata");
  scanf("%d %d",&height,&width);
  for(h=1;h<=height;h++)
  {
    for(w=1;w<=width;w++)
    {
      if((h==1)||(h==height))
        printf("*");
      else if((w==1)||(w==width))
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  printf("\n");
}

void printOval()
{
  int size,h,s,w,h2,w2;

  puts("Podaj rozmiar owalu");
  scanf("%d",&size);

  for(h=1;h<=size/2;h++)//wiersz
  {
    s=(size/2)-h;
    for(w=0;w<=size;w++)//znak w wierszu
    {
      if((w==s)||(w==(size-s)))
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }

  for(h2=size/2;h2>=1;h2--)//wiersz
  {
    s=(size/2)-h2;
    for(w2=size;w2>=0;w2--)//znak w wierszu
    {
      if((w2==s)||(w2==(size-s)))
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  printf("\n");
}

void printArrow()
{
  int h,s,w,h1,w1,size;

  puts("Podaj rozmiar strzaly");
  scanf("%d",&size);

  for(h=1;h<=size/2;h++)//wiersz
  {
    s=(size/2)-h;
    for(w=0;w<=size;w++)//znak w wierszu
    {
      if((w>s)&&(w<(size-s)))
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }

  for(h1=1;h1<=size/2;h1++)//wiersz
  {
    s=(size/2)-h1;
    for(w1=0;w1<=size;w1++)//znak w wierszu
    {
      if(w1==(size/2))
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  printf("\n");
}

void printDiamond()
{
  int h,s,w,h2,w2,size;
  puts("Podaj rozmiar diamentu");
  scanf("%d",&size);
  for(h=0;h<=size/2;h++)//wiersz
  {
    s=(size/2)-h;
    for(w=0;w<=size;w++)//znak w wierszu
    {
      if((w==s)||(w==(size-s)))
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }

  for(h2=size/2;h2>=0;h2--)//wiersz
  {
    s=(size/2)-h2;
    for(w2=size;w2>=0;w2--)//znak w wierszu
    {
      if((w2==s)||(w2==(size-s)))
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  printf("\n");
}

int main()
{
  printRectangle();
  printOval();
  printArrow();
  printDiamond();
  return 0;
}
