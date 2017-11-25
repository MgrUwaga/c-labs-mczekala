//sumę liczb naturalnych od 1 do liczby n
#include <stdio.h>

int main ()
{ 
	int z,n,suma;
	suma=0;

	scanf ("%d", &n);
	
	for(z=1;z<=n;z++)
	{
		suma=suma+z;
	}

	if(n<1)
		printf("liczba mniejsza od 1\n");
	else
		printf("%d\n",suma);
}