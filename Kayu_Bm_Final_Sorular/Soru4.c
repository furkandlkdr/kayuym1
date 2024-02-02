#include <stdio.h>
#include <stdlib.h>

void arama(int dizi[],int boyut,int sayi){
	int i;
	for(i=0;i<boyut;i++){
		if(sayi==dizi[i]){
			break;
		}
	}
	if(sayi==dizi[i]) printf("Aradiginiz eleman %d. indexte bulundu! ",i);
	else printf("Aradiginiz eleman dizide yok!");
}

int main(){
	int dizi[10]={1,2,3,4,5,6,7,8,9,13},sayi;
	printf("Dizide arayacaginiz elemani giriniz: ");
	scanf("%d",&sayi);
	int *mahmut=&dizi;
	arama(mahmut,10,sayi);
	
	return 0;
}
