#include <stdio.h>
#include <stdlib.h>

int main(){
	int sayiAdet,sayi1,sayac1,sayac2=0,toplam1=0,toplam2=0,ort1=0;
	printf("Sayi adedini giriniz: ");
	scanf("%d",&sayiAdet);
	
	for(sayac1=1;sayac1<=sayiAdet;sayac1++){
		printf("Lutfen sayi%d giriniz: ",sayac1);
		scanf("%d",&sayi1);
		printf("\n");
		if (sayi1>100){
			toplam1 += sayi1; // toplam1 = toplam1+sayi1
			sayac2++;
		}
		else if (sayi1<100){
			toplam2 += sayi1;
		}
		
	}
	ort1=toplam1/sayac2;
	printf("100'den kucuklerin toplami: %d\n",toplam2);
	printf("100'den buyuklerin ort %d", ort1);
	return 0;
}
