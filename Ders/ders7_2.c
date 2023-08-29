#include <stdio.h>
#include <math.h>

int main(){
	int sayi,i,j,toplam=0,ussu;
	printf("Kacinci dereceye kadar istiyorsunuz: ");
	scanf("%d",&i);
	
	printf("\nIstediginiz sayiyi giriniz: ");
	scanf("%d", &sayi);
	
	for(j=1;j<=i;j++){
		toplam+=pow(sayi,j);
		printf("\nAnlik toplam: %d", toplam);
	}
	printf("\nToplam son %d", toplam);
	
	return 0;
}
