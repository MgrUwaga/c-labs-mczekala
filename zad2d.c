#include <stdio.h>
int main ()
{
	char string[255];
	int i,x,z,a,b,c,d,e,f;
	char alphabet[]={"abcdefghijklmnopqrstuvwxyzab"};
	char alphabetU[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZAB"};
	char sign;
	int size=0;
	char keyIn[]={"abra"};
	char answer[255];
	for(a=0;a<4;a++)
	{
		for(b=0;b<4;b++)
		{
			if(a==b)
				continue;
			if(keyIn[a]==keyIn[b])
			{
				keyIn[b]=" ";
			}
		}
		for(c=0;c<26;c++)
		{
			if(keyIn[a]==alphabet[c])
			{
				size++;
				string[a]=alphabetU[c+2];
			}
		}
	}
	
	for (i=0;i<11;i++)
	{
	   	scanf("%c",&sign);
	   	for(z=0;z<26;z++)
		{
			if(sign==alphabet[z])
			{
				string[size]=alphabetU[z+2];
				size++;
				break;
			}
		}
	}
	for(d=0;d<size;d++)
	{
		for(e=0;e<size;e++)
		{
			if(d==e)
				continue;
			if(string[d]==string[e])
			{
				string[e]=" ";
			}
		}
		for(f=0;f<26;f++)
		{
			
			if(string[d]==alphabetU[f])
			{
				printf("%c",string[d]);
				answer[d]=alphabetU[f];
			}
		}
	}
	return 0;
}
