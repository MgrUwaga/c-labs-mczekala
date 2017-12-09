#include <stdio.h>
#include <string.h>

int wczytajTekst(char* s)
{
   while (1)
   {
        s = fgets (s, 255, stdin);
        if (strlen(s)==1)
            break;
        printf("%s\n",s);
   }
   return 0;
}

int zaszyfrujZnak(char *s)
{
  char alphabet[] = "abcdefghijklmnopqrstuvwxyzab";
	char alphabetU[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZAB";
  int z;
	for(z=0;z<26;z++)
  {
		if(s[z] == alphabet[z])
    {
			s[z] = alphabetU[z+2];
			break;
		}
	}
  return 0;
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
  wczytajTekst(napis);
  zaszyfrujLinie(napis);
  printf("%s\n", napis);
}
