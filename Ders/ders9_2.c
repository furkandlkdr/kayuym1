#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int matris1[3][3]={};
	int matris2[3][3]={};
	int toplam[3][3]={};
	int i,j,k;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matris1[i][j]=1+rand()%8;
			matris2[i][j]=1+rand()%8;
			printf(" %d ", matris1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ", matris2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Toplam = \n \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			toplam[i][j]=matris1[i][j]+matris2[i][j];
			printf(" %d ", toplam[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
