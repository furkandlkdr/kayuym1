#include <stdio.h>
#include <string.h>

int main(){
	char rehber[11]={"NULL","OYKU","FEYZA","ENIS","EMRE","BURAK","SU","MERT","AHMET","MEHMET","FARUK"};
	long long int numara[11]={000,5055057555,5028087585,5429089952,5409876655,5075527656,5678889052,5759900595,5878809785,3122500595,5059557777};
	char aranan;
	printf("Aramak istediginiz kisinin ismini buyuk harfle yaziniz: ");
	scanf("%s",&aranan);
	int i,bul=0;
	for(i=0;i<10;i++){
		if(aranan==rehber[i]){
			bul=i;
		}
	}
	if(bul==0) printf("Aradiginiz kisi rehberinizde yok! ");
	else printf("%lld",numara[bul]);
	
	return 0;
}
