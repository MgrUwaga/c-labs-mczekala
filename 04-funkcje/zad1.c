// oblicza długość przeciwprostokątnej trójkąta prostokątnego
#include <stdio.h>
#include <math.h>

int main()
{
  double in1;
  double in2;
  double answer;
  scanf("%lf", &in1);
  scanf("%lf", &in2);
  in1=pow(in1, 2.0);
  in2=pow(in2, 2.0);
  answer=sqrt(in1+in2);
  printf("wynik=%lf\n", answer);
  return 0;
}
