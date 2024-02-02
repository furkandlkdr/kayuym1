#include <stdio.h>
#include <stdlib.h>

void cizgi(){/*Aralik birakmak icin aralara cizgi attim
usendigim icin fonksiyon oldu*/
	int i;
	for(i=0;i<55;i++){
		printf("-");
	}
	printf("\n");}
void giris(char *ay){printf("%s\nPzt\t|Sali\t|Cars\t|Pers\t|Cuma\t|Ctesi\t|Pazar\n",ay);}
/*Guncel ayi ve gunleri yazdirma fonksiyonu*/

void bosluk(int kalan){/*Haftadan kalani bosluk olarak yazdirma fonksiyonu*/
	int i;
	for(i=0;i<kalan;i++){
		printf("\t|");}
}

int gunler(int day,int kalan){//Gunleri yazdirma fonksiyonu
	bosluk(kalan);
	const int hafta=7;
	int i;
	for(i=1;i<=day;i++){
		if (hafta-kalan==0){
		printf("\n");
		i--;
		kalan=0;}
		else{
			printf("%d\t|",i);
			kalan++;}
	}
	printf("\n");
	return (kalan);
}
int main(){
	char *aylar[13]={"OCAK","SUBAT","MART","NISAN","MAYIS",
	"HAZIRAN","TEMMUZ","\0","AGUSTOS","EYLUL","EKIM","KASIM","ARALIK"};
	int kalan=6,i;
	printf("2023 Yili Takvimi \n");
	cizgi();//Ocak ayinin degerlerini manuel girip geri kalanini donguye biraktim.
	giris(aylar[0]);
	gunler(31,kalan);
	kalan=2;
	for(i=1;i<13;i++){
		int gun;
		if(i==1) gun=28;
		else if(i%2==0) gun=31;
		else gun=30;
		if(i==7) continue;
		cizgi();
		giris(aylar[i]);
		kalan=gunler(gun,kalan);
	}
	return 0;
}
