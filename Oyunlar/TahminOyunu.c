#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Furkan Dulkadir 221030910016
void tahmin();

	int main(){
		int sayi;
		printf("Bilgisayar 0-201 arasinda bir sayi tuttu! \n");
		tahmin();
		return 0;}

void tahmin(){
	srand(time(0));
	int maks=200,min=1;
	int rast=1+rand()%200,sayac=0,sayi;
	do{
		printf("buldugunuz aralik: %d-%d\nLutfen tahmininizi giriniz: ",min,maks);
		scanf("%d",&sayi);
		if(sayi>rast){
			printf("Tutulandan yuksek bir deger girdiniz!\n\n");
			sayac++;
			if(sayi<maks) maks=sayi;}
		else if(sayi<rast){
			printf("Tutulandan dusuk bir deger girdiniz!\n\n");
			sayac++;
			if(sayi>min) min=sayi;}
	}while(sayi!=rast);
	printf("\n\n%d denemede sayiyi buldunuz.\n",sayac+1);
	if(sayac==0) printf("ULTRA MEGA SANSLI");
	if(sayac<10) printf("200 PUAN, BILGIN");
	if(sayac>=10 && sayac<20) printf("150 PUAN, ZEKI");
	if(sayac>=20 && sayac<30) printf("125 PUAN, KURNAZ");
	if(sayac>=30 && sayac<40) printf("100 PUAN, NORMAL");
	if(sayac>=40 && sayac<50) printf("50 PUAN, TECRUBESIZ");
	if(sayac>=50) printf("0 PUAN, APTAL");}
	
