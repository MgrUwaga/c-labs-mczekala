#include <stdio.h>

int main ()
{
	int i,x,z;
	for(i=0;i<4;i++)
	{
		for(x=1;x<=4;x++)
		{
			for(z=0;z<x;z++)
			{
				putchar('*');
			}
			printf("\n");
		}
	}
}