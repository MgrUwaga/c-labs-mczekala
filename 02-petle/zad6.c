//wypisuje największą i najmniejszą liczbę umieszczoną w tablicy
#include <stdio.h>

int main ()
{ 
	int i,x;
	int max=0;
	int min=0;
	int n[6];
	
	for(i=0;i<6;i++)
	{
		scanf ("%d", &n[i]);
	}
	for(x=0;x<6;x++)
	{
		if(n[x]>max)
			max=n[x];
	}
	
	min=max;
	for(x=0;x<6;x++)
	{
		if(n[x]<min)
			min=n[x];
	}
	printf ("max-%d\nmin-%d\n",max,min );
}
