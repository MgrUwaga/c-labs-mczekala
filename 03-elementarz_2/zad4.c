//program zliczający znaki odstępu, tabulacji i nowego wiersza
#include <stdio.h>

int main()
{
  char c;
  int nb = 0;  /* liczba znaków odstępu */
  int nt = 0;  /* liczba znaków tabulacji */
  int nl = 0;  /* liczba znaków nowego wiersza */
	
  while ((c=getchar()) != EOF)
	{
		switch (c)
		{
			case 9:
				nt++;
				break;
			case 10:
				nl++;
				break;
			case 32:
				nb++;
				break;
		}
  	}
  printf("liczba znaków odstępu = %d,tabulacji = %d, nowego wiersza = %d\n",nb,nt,nl);
  return 0;
}
