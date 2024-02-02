#include <stdio.h>
#include <stdlib.h>

int ark(int dizi[],int boyut){
	int i;
	for(i=1;i<boyut-1;i++){
		if(dizi[i]==dizi[i-1]+dizi[i+1]){
			return 1;}
	}
	return 0;
}

int main(){
	int dizi[10]={1,4,3,4,5,6,7,12,9,10};
	int boyut=sizeof(dizi)/4;
	printf("Dogruluk degeri: %d",ark(dizi,boyut));
	
	return 0;
}
