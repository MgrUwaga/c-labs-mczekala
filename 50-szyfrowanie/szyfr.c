#include <stdio.h>
#include <string.h>

int readLine(char* s)
{
  s = fgets (s, 255, stdin);
  return 0;
}
char encodeCharacter(char sign)
{
  char alphabet[] = "abcdefghijklmnopqrstuvwxyzab";
  char alphabetU[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZAB";
  int z;
  for(z=0;z<26;z++)
  {
    if(sign == alphabet[z])
    {
	  sign = alphabetU[z+2];
	  break;
	}
  }
  return sign;
}
int encodeLine(char*s)
{
  int i;
  for(i=0;i<strlen(s);i++)
  {
    s[i]=encodeCharacter(s[i]);
  }
  return 0;
}
int writeEncodedAll(char**s,int i)
{
  int x;
  for(x = 0; x < i; x++)
  {
    printf("answer %s\n", &s[x]);
  }
}
int main()
{
  char* line[255];
  int i;
  for(i=0;i<255;i++)
  {
    readLine((char*)&line[i]);
	encodeLine((char*)&line[i]);
	if((strlen((char*)&line[i])<2))
	  break;
  }
  writeEncodedAll((char**)&line,i);
}
