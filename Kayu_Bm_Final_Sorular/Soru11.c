#include <stdio.h>
#include <stdlib.h>

void frekans(int dizi[]){
	int i,j,sayac[10];
	for(i=0;i<10;i++){//Sayac dizisini sifirlama
		sayac[i]=0;}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(dizi[i]==j){
				sayac[j]++;
			}
		}
	}
	for(i=0;i<10;i++){
		if(sayac[i]!=0){
			printf("Dizinizde %d rakamindan %d adet vardir.\n",i,sayac[i]);
		}
	}
}
int main(){
	int dizi[10]={1,4,3,4,5,6,7,5,9,2};
	int i;
	for(i=0;i<10;i++){
		printf("%d ",dizi[i]);
	}
	printf("\n");
	frekans(dizi);
		
	return 0;
}
