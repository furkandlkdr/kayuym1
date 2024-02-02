#include <stdio.h>
#include <stdlib.h>

int minn(int dizi[]){
	int i,j,gecici,min1=100,min2=100;
	for(i=0;i<9;i++){//Buyukten kucuge siralama
        for(j=i+1;j<10;j++){
            if(dizi[j] < dizi[i]){
                gecici = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = gecici;}
		}
	}
	for(i=0;i<10;i++){
		if(dizi[i]<=min1){
			min1=dizi[i];}
		else if(dizi[i]<min2){
			min2=dizi[i];}
	}
	return min2;
}
int main(){
	int dizi[10]={1,1,3,4,5,6,7,12,9,10};
	printf("En kucuk 2. degeri: %d",minn(dizi));
	return 0;
}
