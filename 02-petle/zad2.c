#include <stdio.h>

int main ()
{ 
	int i,x;
	for(i=0;i<8;i++)
	{

		for(x=0;x<8;x++)
		{
			printf("%s ","*");
		}
		printf("\n ");
		for(x=0;x<8;x++)
		{
			printf("%s ","*");
		}
		printf("\n");
		
	}
}