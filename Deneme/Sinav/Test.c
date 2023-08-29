#include <stdio.h>
#include "toplamaYap.h"
#include "cikarmaYap.h"
#include "carpmaYap.h"
#include "bolmeYap.h"

int main(){
	long int sayi1,sayi2;
	printf("Lutfen islem yapmak istediginiz iki sayiyi girin: ");
	scanf("%d %d",&sayi1,&sayi2);
	char secim;
	printf("Lutfen yapmak istediginiz (+,-,/,*)islemi girin: ");
	scanf("%s",&secim);
	printf("Sonucunuz: ");
	switch(secim){
		case '+':
			printf("%ld",toplama(sayi1,sayi2));
			break;
		case '-':
			printf("%ld",cikarma(sayi1,sayi2));
			break;
		case '*':
			printf("%lld",carpma(sayi1,sayi2));
			break;
		case '/':
			printf("%f",bolme(sayi1,sayi2));
			break;
		default:
			printf("Lutfen gecerli bir deger giriniz!");
	}
	return 0;
}
