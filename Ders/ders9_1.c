#include <stdio.h>
#include <stdlib.h>

int main(){
	int birim[8][8];
	int i,j;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(i==j){
				birim[i][j]=1;
			}
			else birim[i][j]=0;
			printf(" %d ", birim[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
