//wszystki ciagi binarne
#include<stdio.h>
#include<math.h>

void toBinary(int value);
void writeBinaryString(int length);
int main(int argc, char const *argv[])
{
  int input;
  scanf("%d",&input);
  writeBinaryString(input);
}
void writeBinaryString(int length)
{
  int i;
  for(i=0;i<pow(2,length);i++)
  {
    toBinary(i);
    printf("\n");
  }
}
void toBinary(int value)
{
  int answer;
  if(value>0)
  {
    answer=value%2;
    toBinary(value/2);
    printf("%d",answer);
  }
}
