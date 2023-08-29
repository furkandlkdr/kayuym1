#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Furkan Dulkadir 221030910016\n");
	char alfabe[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char harf[5];
	printf("Lutfen sifrelemek istediginiz harfi giriniz: ");
	gets(harf);
	int uzun=strlen(harf),i,j;
	for(i=0;i<uzun;i++){
		for(j=0;;j++){
			if (alfabe[j]==harf[i]) break;}
		if(j>12) j=j-26;
		harf[5]=alfabe[j+13];
		printf("%c",harf[5]);
	}
	return 0;
}
