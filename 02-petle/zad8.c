#include <stdio.h>

int main ()
{
	int i1,i2,x1,x2,x3,x4,z1,z2,z3,z4;
	char sign[4];
	for(x1=1;x1<=4;x1++)
	{
		for(z1=0;z1<x1;z1++)
		{
			putchar('*');
		}
		printf("\n");
	}
	for(x2=4;x2>=1;x2--)
	{
		for(z2=0;z2<x2;z2++)
		{
			putchar('*');
		}
		printf("\n");
	}
	for(x3=4;x3>=1;x3--)
	{
		for(i1=0;i1<4-x3;i1++)
		{
			putchar(' ');
		}
		for(z3=0;z3<x3;z3++)
		{
			putchar('*');
		}
		printf("\n");
	}
	for(x4=1;x4<=4;x4++)
	{
		for(i2=0;i2<4-x4;i2++)
		{
			putchar(' ');
		}
		for(z4=0;z4<x4;z4++)
		{
			putchar('*');
		}
		printf("\n");
	}
}
