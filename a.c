#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main ()
{

	int a[3];//value
	int *s[3];//point value
	char s1[]="x^2";
	char s2[]="x";
	char s3[]="";
	s[0]=&s1;
	s[1]=&s2;
	s[2]=&s3;
	for(int i=1;i<4;i++)
 	{
     		printf("podaj a[%d]=", i);
     		scanf("%lf",&a[i]);
  	}

	char sign;
	int i=0;
	for(i=0; i<3; i++)
	{
		if(a[i]<0)
		{
			a[i]=a[i]*(-1);
			sign="-";
		}
		else if(a[i]>=0)
		{
			sign="+";
			if(i==0)
			{
				sign="";
			}
		}
		if(((a[i]<-1)||(a[i]>1))||(i==2))
		{
			printf("%c%d%s",sign,a[i],s[i]);
		}
		else if((a[i]==1)||(a[i]==-1))
		{
			printf("%c%s",sign,s[i]);
  		}
	}
}









