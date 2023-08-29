#include <stdio.h>
#define NOTSAYISI 10

void notlariOku(int[],int);
double ortalamaBul(int[],int);

int main(){
	int notlar[NOTSAYISI];
	notlariOku(notlar,NOTSAYISI);
	double ortalama=ortalamaBul(notlar,NOTSAYISI);
	
	printf("Girdiginiz degerlerin ortalamasi: %.2f\n",ortalama);
	return 0;
}
void notlariOku(int notlar1[],int sayi){
	int i;
	for(i=0;i<sayi;i++){
		printf("%3d sayiyi giriniz: ",i+1);
		scanf("%d", &notlar1[i]);
	}
}
double ortalamaBul(int notlar[],int sayi){
	double toplam=0;
	int i;
	for(i=0;i<sayi;i++){
		toplam+=notlar[i];
	}
	return (double)toplam/(double)sayi;
}
