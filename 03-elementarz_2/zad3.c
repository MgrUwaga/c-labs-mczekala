#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void obliczPi(int end)
{
	double pi=0;
	double i;
	for(i=1;i<=end;i=i+4)
	{
		pi=pi+(4/i)-(4/(i+2));
	}
	printf("%lf\n",pi);
}

int main ()
{
	obliczPi(10);
	obliczPi(100);
	obliczPi(1000);
	obliczPi(1000000);
}
