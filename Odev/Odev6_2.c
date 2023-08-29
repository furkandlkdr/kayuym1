#include <stdio.h>

int main(){
	int sayi1,sayi2,fark,sayac,x;
	x=0;
	printf("ilk sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("\nikinci sayiyi giriniz: ");
	scanf("%d", &sayi2);
	sayac=sayi1;
	fark=sayi2;
	while(sayac!=0){
		sayac=sayac-fark;
		x++;
	}
	printf("Sonucunuz: %d",x);
	return 0;
}
