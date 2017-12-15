#include <stdio.h>
#include <string.h>

int wczytajLinie(char* s)
{
        s = fgets (s, 255, stdin);
   return 0;
}

char zaszyfrujZnak(char sign)
{
  char alphabet[] = "abcdefghijklmnopqrstuvwxyzab";
  char alphabetU[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZAB";
  int z;
	for(z=0;z<26;z++)
    {
		if(sign == alphabet[z])
        {
			sign = alphabetU[z+2];
			break;
		}
	}
  return sign;
}
int zaszyfrujLinie(char*s)
{
  int i;
  for(i=0;i<strlen(s);i++)
  {
    s[i]=zaszyfrujZnak(s[i]);
  }
  return 0;
}

// wypisz_zaszyfrowany_tekst(string)
// {
// 	for(x = 0; x < size; x++)
//   {
// 		printf("%c", string[x]);
// 	}
// 	printf("\n");
//   fputs(string, stdout);
// }

int main()
{
  char napis[255];
//  char* answer [255];
  int i;
    wczytajLinie(napis);
    zaszyfrujLinie(napis);
//    answer [0]=napis;
    printf("%s\n",napis); 
    
//  printf("answer %s\n", answer[0]); 
}
