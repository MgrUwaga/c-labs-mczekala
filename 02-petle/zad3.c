#include <stdio.h>

int main ()
{ 
	int x,z,a,b;
	scanf ("%d", &a);
	scanf ("%d", &b);
	if(a<b)
	{
		a++;
		for(z=a;z<b;z++)
		{
			printf("%d\n",z);
		}
	}
	else if(a>b)
	{
		b++;
		for(x=b;x<a;x++)
		{
			printf("%d\n",x);
		}
	}
}