#include <stdio.h>
#include <stdlib.h>

void fonk(int *dizi,int boyut,int *maks,int *min){
	*maks= dizi[0];
	*min= dizi[0];
	int i;
	for(i=1;i<5;i++){
		if(dizi[i]>maks) *maks=dizi[i];
		else if(dizi[i]<min) *min=dizi[i];
	}
}

int main(){
	int maks,min,sayi[5]={1,2,3,4,5};
	fonk(sayi,5,&maks,&min);
	printf("Minimum deger: %d \nMaksimum deger: %d",maks,min);
	return 0;
}

