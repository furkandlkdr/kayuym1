#include <stdio.h>
#include <stdlib.h>

int buyuk(int dizi[],int boyut){
	int maks=0,i;
	for(i=0;i<boyut;i++){
		if(dizi[i]>maks){
			maks=dizi[i];
		}
	}
	return maks;
}
int main(){
	int dizi[10]={1,2,3,4,5,6,7,12,9,10};
	int *mahmut=&dizi;
	printf("Dizinin en buyuk degeri: %d",buyuk(mahmut,10));
	
	return 0;
}
