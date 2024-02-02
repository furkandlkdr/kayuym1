#include <stdio.h>
#include <stdlib.h>

int main(){
	char alfabe[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char kelime[50],sifre[50];
	printf("Lutfen sifrelemek istediginiz kelimeyi giriniz: ");
	gets(kelime);
	int uzun=strlen(kelime),i,j;
	for(i=0;i<uzun;i++){
		for(j=0;;j++){
			if (alfabe[j]==kelime[i]) break;
		}
		if(j>22) j=j-26;
		printf("%c",alfabe[j+3]);
	}
	
	return 0;
}
