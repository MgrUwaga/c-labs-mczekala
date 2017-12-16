#include <stdio.h>
#include <string.h>
int main()
{
  char alphabet[51];
  scanf ("%s",alphabet);
  int i=0;
  int answer=0;
  alphabet[50]=alphabet[0];
  while(1)
  {
    if(strlen((int)alphabet[i])<1)
    {
      printf("koniec\n");
      break;
    }
    if(alphabet[i]==alphabet[i+1])
    {
      answer=answer+((int)alphabet[i]-48);
      printf("%d\n",answer);
    }
    i++;
  }
  printf("%d\n",answer);
  return 0;
}
