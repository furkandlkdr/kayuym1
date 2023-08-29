#include <stdio.h>

int main(){
	int i;
	int a,toplam=0;
	float ort=0;
	int sayac;
	
	sayac=0;
	
	printf("bir a sayisi giriniz");
	scanf("%d",&a);
	 
	for(i=3;i<=a;i+=3){
		toplam+=i; // toplam=toplam+i
		sayac++; // sayac+=1 , sayac=sayac+1
	}
	
	ort=(float)toplam/sayac;
	
	printf("ort: %.2f", ort);
	return 0;
}
