// oblicza wartość silni z liczby naturalnej
#include <stdio.h>

int obliczSilnie(int end)
{
  int i;
  int answer=1;
  for(i=1;i<=end; i++)
  {
    answer=answer*i;
  }
  return answer;
}

int main()
{
  int answer = obliczSilnie(10);
  printf("%d\n", answer);
  return 0;
}
