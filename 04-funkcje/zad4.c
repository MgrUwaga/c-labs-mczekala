// wypisuje liczbe od konca
#include <stdio.h>
#include <string.h>

void printReversedNumber(char number[])
{
  int i;
  for(i=strlen(number);i>=0;i--)
  {
    printf("%c", number[i]);
  }
}

int main()
{
  char number[255];
  scanf("%s",number);
  printReversedNumber(number);
  return 0;
}
