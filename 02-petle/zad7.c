#include <stdio.h>

int main ()
{ 
	int i;
	int a=0;
	int n[6];
	for(i=0;i<6;i++)
	{
		scanf ("%d", &n[i]);
		if(n[i]>0)
			a++;
	}
	printf ("%d",a);
}