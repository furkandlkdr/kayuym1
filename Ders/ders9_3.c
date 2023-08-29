#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int matris1[2][2]={};
	int matris2[2][2]={};
	int carpim1[3][3]={};
	
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			matris1[i][j]=1+rand()%8;
			matris2[i][j]=1+rand()%8;
			printf(" %d ", matris1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf(" %d ", matris2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			carpim1[i][j]=matris1[i][j]*matris2[j][i]+matris1[i][j+1]*matris2[j+1][i];
			printf("%d ",carpim1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
