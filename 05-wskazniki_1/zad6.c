//funkcja zwracajaca pierwszy znak slowa (nonwhite character)
#include <stdio.h>
char* getFirstNWC(char word[])
{
  return &word[0];
}
int main()
{
  char word[]="word";
  char* pointer;
  pointer=getFirstNWC(word);
  printf("%c\n", *pointer);
  return 0;
}
