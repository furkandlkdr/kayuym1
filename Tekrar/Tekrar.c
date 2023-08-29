#include <stdio.h>
#include <math.h>

int main(){
	printf("Furkan Dulkadir 221030910016 \n");
	long int banka=1000000;
	long int istek;
	printf("Lutfen cekmek istediginiz tutari giriniz: ");
	scanf("%d", &istek);
	if (istek>1000000){
		printf("Hesabinizda yeterli bakiye yok! Lutfen tekrar deneyiniz. ");
	}
	else if (istek>50000){
		printf("Istediginiz miktar gunluk islem tutarinizdan yuksek! Lutfen tekrar deneyiniz. ");
	}
	else if (istek>250){
		long int kalan;
		kalan=banka-istek;
		long int gunluk=50000-istek;
		printf("Kalan bakiyeniz= %ld\nKalan gunluk islem tutariniz: %ld",kalan,gunluk);
	}
	else{
		printf("250'den yuksek bir tutar yazmalisiniz! ");
	}
	return 0;
}
