#include <stdio.h>
#include <stdlib.h>

void fonk(int *dizi,int boyut, int *min,int *maks);

int main(){
	int i,boyut,temp,maks=0,min=0;
	printf("Girmek istediginiz dizinin boyutunu girin: ");
	scanf("%d",&boyut);
	int dizi[boyut];
	for(i=0;i<boyut;i++){
		printf("Lutfen dizinin %d. elemanini giriniz: ",i+1);
		scanf("%d",&temp);
		dizi[i]=temp;
		if(temp>maks) maks=temp;
		if(temp<min) min=temp;
	}
	fonk(dizi,boyut,min,maks);
	return 0;
}

void fonk(int *dizi,int boyut, int *min,int *maks){
	printf("Dizinin en buyuk elemani %d",*maks);
	printf("Dizinin en kucuk elemani %d",*min);
}
