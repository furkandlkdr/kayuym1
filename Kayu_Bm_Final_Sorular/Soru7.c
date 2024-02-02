#include <stdio.h>
#include <stdlib.h>

float cagir(int sayi,int rakam){
	int a,b,c,d,e,i,toplam=0,sayac=0;
	float ort;
	a=sayi%10;
	b=(sayi%100-a)/10;
	c=(sayi%1000-b*10-a)/100;
	d=(sayi%10000-c*100-b*10-a)/1000;
	e=(sayi-d*1000-c*100-b*10-a)/10000;
	if(a<rakam){ toplam+=a;
	sayac++;}
	if(b<rakam){ toplam+=b;
	sayac++;}
	if(c<rakam){toplam+=c;
	sayac++;}
	if(d<rakam){toplam+=d;
	sayac++;}
	if(e<rakam){toplam+=e;
	sayac++;}
	ort=(float)toplam/sayac;
	printf("%d adet rakam vardir ",sayac);
	return ort;
}
int main(){
	int sayi,rakam;
	printf("Lutfen 5 basamakli bir sayi giriniz: ");
	scanf("%d",&sayi);
	printf("Lutfen bir rakam giriniz: ");
	scanf("%d",&rakam);
	printf("%f",cagir(sayi,rakam));
	return 0;
}
