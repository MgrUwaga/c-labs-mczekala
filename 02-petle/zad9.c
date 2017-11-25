//Napisz program monożący liczby tak jak to pokazano w tym filmiku A Night Of Numbers – Go Forth And Multiply
#include <stdio.h>

int main()
{
	int a[256];
	int b[256];
	int i=0;
	int g;
	int z=0;
	int answer=0;
	
	scanf ("%d", &a[0]);
  	while(a[i]>1)
	{
  		a[i+1]=a[i]/2;
  		i++;
	}	
	scanf ("%d", &b[z]);
	while(z<i)
	{
		z++;
		b[z]=b[z-1]*2;
	}
	for(g=0;g<5;g++)
	{
		if((a[g]%2)!=0)
		{
			answer=answer+b[g];
		}
	}
	printf("%d",answer);
	return 0;
}
