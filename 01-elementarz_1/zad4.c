//Napisać program obliczający silnię z podanej liczby
#include <stdio.h>

int main() 
{
	int a;
	scanf ("%d", &a);
   	int i=a;
	while (i>=2)
	{			
		i--;
		a=a*i;
	}
	printf("%d\n",a);
	return 0;
}
