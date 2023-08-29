#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rps(int);
int win=0,lose=0;//Global kazanma kaybetme tutucular
int main(){
	char secilen;
	int sayi;
	system("COLOR 9");
	printf("Furkan Dulkadir 221030910016\n");
	printf("Tas=T, Kagit=K, Makas=M, Cikis=C\n");
	do{
		
		printf("\n  Lutfen yapacaginiz hamleyi seciniz:  ");
		scanf("%s",&secilen);
		switch(secilen){ //Secilen harfe gore temp atamasi
			case 'T':
				sayi=0;
				break;
			case 'K':
				sayi=1;
				break;
			case 'M':
				sayi=2;
				break;
			case 'C':
				sayi=3;
				break;
			default:
				printf("Lutfen gecerli bir hamle secin!\n\n");}
		rps(sayi);
	}while(sayi!=3);
	printf("Toplam kazanma: %d, Toplam kaybetme: %d",win,lose);
	return 0;
}
void rps(int sayi){/*Tas kagit makas fonksiyonu randomla 
alýyor ona göre eþitleyip ayrý ayrý yazýyor*/
	srand(time(0));
	int temp=rand()%3;
	if (sayi==temp)
		printf("Berabere kaldiniz tekrar deneyiniz!\n");
	else if(sayi==2 && temp==1){
		printf("Bilgisayar 'KAGIT' yaparak kaybetti!\n");
		win++;}
	else if(sayi==1 && temp==2){
		printf("Bilgisayar 'MAKAS' yaparak kazandi!\n");
		lose++;}
	else if(sayi==2 && temp==0){
		printf("Bilgisayar 'TAS' yaparak kazandi!\n");
		lose++;}
	else if(sayi==0 && temp==2){
		printf("Bilgisayar 'MAKAS' yaparak kaybetti!\n");
		win++;}
	else if(sayi==1 && temp==0){
		printf("Bilgisayar 'TAS' yaparak kaybetti!\n");	
		win++;}
	else if(sayi==0 && temp==1){
		printf("Bilgisayar 'KAGIT' yaparak kazandi!\n");
		lose++;}
}
