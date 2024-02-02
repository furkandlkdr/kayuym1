#include <stdio.h>

int main(){
	int sayi,a,b,c;
	float ort;
	b=0;
	printf("Sayi giriniz: ");
	scanf("%d", &sayi);
	printf("\n");
	printf("Sayidan kucuk 3'un katlari: ");
	for(a=3;a<sayi;a=a+3){
		printf("%d \n",a);
		b+=a;
		printf("Anlik toplam %d \n",b);
		c++;
	}
	ort=b/c;
	printf("Son Ortalama: %f", ort);
	
	return 0;
}
