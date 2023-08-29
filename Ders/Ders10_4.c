#include <stdio.h>
void ortalamaBul(int[],int);
void notlariOku(int[]);

int main(){
	int notlar[10];
	int sayac=10;
	notlariOku(notlar);
	ortalamaBul(notlar[10],sayac);
	return 0;
}

void notlariOku(int notlar[10]){
	int i;
	for(i=0;i<10;i++){
		printf("%d. notu giriniz: ",i+1);
		scanf("%d",&notlar[i]);
	}
}
void ortalamaBul(int notlar[10],int sayac){
	int toplam=0,i;
	int sonuc;
	for(i=0;i<10;i++){
		toplam+=notlar[i];
	}
	sonuc=toplam/sayac;
	printf("Ortalamaniz: %d",sonuc);
}
