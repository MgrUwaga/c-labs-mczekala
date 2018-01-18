//odwraca tekst
#include <stdio.h>
#include <string.h>

void reverse(char sign[255]);
int main(int argc, char const *argv[])
{
  char sign[255];
  scanf("%s",sign);
  reverse(sign);
}

void reverse(char input[255])
{
  char output[255];
  int i;

  printf("%c",input[strlen(input)-1]);

  for(i=0;i<(int)strlen(input)-1;i++)
  {
      output[i]=input[i];
  }
  if(strlen(input)>1)
    reverse(output);
}
