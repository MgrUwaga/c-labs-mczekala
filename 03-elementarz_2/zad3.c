//Oblicz wartość π (pi) z nieskończonej sumy
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double obliczSume(int end)
{
	double pi=0;
	double i;
	for(i=1;i<=end;i=i+4)
	{
		pi=pi+(4/i)-(4/(i+2));
	}
	return pi;
}

int obliczPi (double pi)
{
	int i;
	while (obliczSume(i)<pi)
	{
		i++;
	}
	return i;
}

int main ()
{
	printf("%lf\n",obliczSume(10));
	printf("%lf\n",obliczSume(100));
	printf("%lf\n",obliczSume(1000));
	printf("%lf\n\n",obliczSume(1000000));

	printf("%d\n",obliczPi(3.14));
	printf("%d\n",obliczPi(3.141));
	printf("%d\n",obliczPi(3.1415));
}
