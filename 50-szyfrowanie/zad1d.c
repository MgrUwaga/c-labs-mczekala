#include <stdio.h>
#include <string.h>

// wypisz_zaszyfrowany_tekst(string) {
// }

int main() {
	char string[255];
	int i,z;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzab";
	char alphabetU[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZAB";
	char sign;
	int size = 0;
  // char text[255];

	// scanf("%s", text);
	// printf("[%s]", text);
	// strlen(text) => 11

  // wczytaj_tekst(gdzie)
	//		gdzie = fgets(gdzie, 255, stdin)
	//    gdzie == NULL -> zakończ działanie exit(1)
	//    gdzie != NULL -> wczytano poprawnie tekst do zaszyfrowania

  // zaszyfruj(co)

	for (i = 0; i < 11; i++) {
		scanf("%c", &sign);
		for(z=0;z<26;z++) {
			if(sign == alphabet[z]) {
				string[size] = alphabetU[z+2];
				size++;
				break;
			}
		}
	}

	// wypisz_zaszyfrowany_tekst(co)

	// wypisz_zaszyfrowany_tekst(string);

	// for(x = 0; x < size; x++) {
	// 	printf("%c", string[x]);
	// }
	// printf("\n");
	fputs(string, stdout);
}
