#include <stdio.h>
#include <math.h>

int main(){
	float sayi1,sayi2;
	char islem;
	printf("Lutfen ilk sayiyi giriniz: \n");
	scanf("%f", &sayi1);
	printf("Lutfen ikinci sayiyi giriniz: \n");
	scanf("%f", &sayi2);
	printf("Lutfen yapmak istediginiz islemi(+,-,*,/) giriniz: \n");
	scanf("%s", &islem);
	switch(islem){
		case '+':
			printf("Sonucunuz: %f",sayi1+sayi2);
			break;
		case  '-':
			printf("Sonucunuz: %f", sayi1-sayi2);
			break;
		case '*':
			printf("Sonucunuz: %f", sayi1*sayi2);
			break;
		case '/':
			printf("Sonucunuz: %f", sayi1/sayi2);
			break;
		default:
			printf("Lutfen listedeki islemlerden birini seciniz! ");
	}
	return 0;
}
