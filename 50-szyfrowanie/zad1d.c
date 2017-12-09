#include <stdio.h>

int main() {
	char string[255];
	int i,x,z;
	char alphabet[] = {"abcdefghijklmnopqrstuvwxyzab"};
	char alphabetU[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZAB"};
	char sign;
	int size = 0;

	for (i=0;i<11;i++) {
		scanf("%c",&sign);
		for(z=0;z<26;z++) {
			if(sign==alphabet[z]) {
				string[size]=alphabetU[z+2];
				size++;
				break;
			}
		}
	}
	for(x=0;x<size;x++) {
		printf("%c",string[x]);
	}
}
