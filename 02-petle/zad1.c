//Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010.
#include <stdio.h>

int main ()
{ 
	int i;
	for(i=2;i<2010;i=i*2)
	{
		printf("%d\n",i);
	}
}
