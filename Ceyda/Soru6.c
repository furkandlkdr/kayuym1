#include <stdio.h>
#include <stdlib.h>

float arit(int dizi[],int boyut){
	int i,toplam=0;
	for(i=0;i<boyut;i++){
		toplam=toplam+dizi[i];
	}
	
	float ort=(float)toplam/boyut;
	return ort;
}
int main(){
	int dizi[10]={1,2,3,4,5,6,7,12,9,10};
	printf("Ortalama: %f",arit(dizi,10));
	return 0;
}
