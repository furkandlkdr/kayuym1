#include <stdio.h>

int main(){
	int i,temp1=0,temp2;
	int sayiDizisi[12]={23,21,10,5,4,24,10,15,18,9,6,3};
	temp2=sayiDizisi[0];
	for(i=0;i<12;i++){
		if(sayiDizisi[i]>temp1){
			temp1=sayiDizisi[i];
		}
		if(sayiDizisi[i]<temp2){
			temp2=sayiDizisi[i];
		}
	}
	printf("En kucuk: %d\t En buyuk: %d",temp2,temp1);
	
	return 0;
}
