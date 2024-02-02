#include <stdio.h>

int main(){
	int sayi,a,b;
	printf("Sayi giriniz: ");
	scanf("%d", &sayi);
	printf("\n");
	printf("Sayidan kucuk 3'un katlari: ");
	for(a=3;a<=sayi;a=a+3){
		printf("%d  ",a);
	}
	
	return 0;
}
