#include <stdio.h>
#include <stdlib.h>

int main(){
	int puanTablosu[6][5] = {{3,1,0,3,1},{0,3,3,3,3},{1,0,3,1,1},{3,0,0,0,0},{0,0,1,3,3},{1,0,1,3,0}};
	char* takimlar[6] = {"A","B","C","D","E","F"};
	int sampiyon = 0;
	int toplamPuan=0;
	int i;
	for(i=0;i<6;i++){
		int temp=0;
		int j;
		for(j=0;j<5;j++){
			printf("%d ",puanTablosu[i][j]);
			temp+=puanTablosu[i][j];
		}
		if(temp>toplamPuan){
			toplamPuan=temp;
			sampiyon=i;
		}
		printf("\n");
	}
	
	printf("\n%s Takimi %d puan ile sampiyon olmustur.",takimlar[sampiyon],toplamPuan);
	
	return 0;
}
