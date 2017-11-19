 
int main()
{
	int a[256];
	int b[256];
	int i=0;
	scanf ("%d", &a[0]);
  	while(a[i]>1)
	{
  		a[i+1]=a[i]/2;
  		i++;
	}	
	int z=0;
	scanf ("%d", &b[z]);
	while(z<i)
	{
		z++;
		b[z]=b[z-1]*2;
	}
	int g;
	int answer=0;
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
