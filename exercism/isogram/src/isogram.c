#include <stdio.h>

int main()
{
  char alphabet[51];
  scanf ("%s",alphabet);
  int i;
  int answer=0;
  alphabet[50]=alphabet[0];
  for(i=0;i<51;i++)
  {
    if(alphabet[i]==alphabet[i+1])
    {
      answer=answer+((int)alphabet[i]-48);
      printf("%d\n",answer);
    }
  }
  return 0;
}
