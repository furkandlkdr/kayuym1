#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,sayac,toplam=0;
	printf("Bir sayi giriniz: ");
	scanf("%d", &a);
	printf("Diger sayi giriniz: ");
	scanf("%d", &b);
	
	for(sayac=0;sayac<b;sayac++) toplam=toplam+a;
	
	printf("Sonucunuz: %d", toplam);
	return 0;
}
