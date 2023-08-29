#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("Furkan Dulkadir 221030910016\n");
	int sayi;
	int sayac1=1;
	int sayac2=0;
	int sayac3=0;
	long int toplam=0;
	long int fakt=1;
	float taylor=0;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &sayi);
	printf("\n");
	while(sayac1<10){
		fakt=fakt*sayac1;
		printf("fakt: %d\n",fakt);
		toplam=pow(sayi,sayac2);
		printf("Toplam: %d\n",toplam);
		taylor=(float)toplam/fakt;
		printf("%d. elemani: %f\n",sayac2+1,taylor);
		sayac1++;
		sayac2++;
	}
	
	return 0;
}
