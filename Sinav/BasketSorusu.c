#include <stdio.h>
#include <time.h>
int main(){
	srand(time(0));
	int sayi,gecici,i=0,skor[6]={};
	char *oyuncu[6]={"Lebron","Curry","Sengun","Kobe","Furkan","Su"};
	printf("Lutfen takiminizin attigi sayiyi giriniz: ");
	scanf("%d",&sayi);//Atilan sayiyi istiyor
	while(sayi>=2){//2'den buyukken dongu saglansýn
		if(sayi==2){//2 kaldiysa random ile 3 puan riskine girmeden esitleyelim
			skor[i]+=2;//Oyuncunun skoruna 2 ekleyelim
			sayi=sayi-2;//Ve bitirme sartini saglamasi icin 2 cikartalim
		}
		else{
			gecici=2+rand()%2;//2lik veya 3luk skor atilsin
			skor[i]+=gecici;//Oyuncuya ekleyelim
			sayi=sayi-gecici;//Toplam sayidan duselim
			i++;//Siradaki oyuncuya gecelim ki herkes esit oynasin:))
			if(i==6) i=0;//7. oyuncumuz yok o yuzden basa alsin
		}
	}
	for(i=0;i<6;i++) printf("%s\t adli oyuncu %d sayi atti!\n",oyuncu[i],skor[i]);
	return 0;
}
