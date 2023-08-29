#include <stdio.h>
#include <math.h>
/*Kart numaranýzdaki çift indexleri 2 ile çarpýp aldýgýmýz yere yazarak,
ayný zamanda 10'dan buyuk çýkarsa rakamlarýný toplayarak elde ettigimiz toplamý 10'a boluyoruz
ve kalanýmýz 0 ise kartýmýz geçerli oluyor*/
int main(){
	int kart[16],adet=0,no,i;
	long int toplam=0;
	printf("Lutfen kart numarasini giriniz: ");
	while(1){
		scanf("%d",&no);/*Gecici degisken belirleyerek dogru mu yanlis mi
		ona bakýyor*/
		if(no<10 && no>=0){
			kart[adet]=no;
			adet++;
		}
		else printf("Hatali karakter!\n");
		if(adet==16) break;//Adet 16 olunca donguden cikiyor
	}
	for(i=0;i<16;i+=2){/*Cift indexleri iki ile çarpýp yerine yazýyor
	10dan buyukse rakamlarýný topluyor*/
		kart[i]=kart[i]*2;
		if(kart[i]>9)
			kart[i]=kart[i]%10+kart[i]/10;
	}
	for(i=0;i<16;i++)//Butun indexleri topluyor
		toplam+=kart[i];
	if(toplam%10==0) printf("Kartiniz gecerlidir!");
	else printf("Kartiniz gecersizdir!");
	
	return 0;
}
