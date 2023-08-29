#include <stdio.h>
#include <stdlib.h>

int main(){
	int sayi,x,asalmi=0,j;
	printf("Asal sayilarin bulunmasi icin bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for (x=2;x<=sayi;x++){
		asalmi=0;
		for(j=2;j<x;j++){
			if (x%j==0){
				asalmi=1;
			}
		}
		if(asalmi==0){
			printf("\n %d sayisi asal sayidir.",x);
		}
		else{
			printf("\n %d sayisi asal sayi degildir.",x);
		}
	}
	
	return 0;
}
