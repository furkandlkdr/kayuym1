#include <stdio.h>

int main(){
	int i,j,k;
	int sayiDizisi[10][4][4]={
		{{3,2,-1,-4},{5,1,2,3},{12,3,-4,-2},{9,2,3,-10}},
		{{2,3,4,-16},{2,1,-20,-15},{2,7,9,-9},{-19,9,-7,-6}},
		{{4,5,2,3},{11,-17,9,3},{-12,-3,5,-3},{18,0,-4,7}},
		{{3,2,-1,-4},{5,1,2,3},{12,3,-4,-2},{9,2,3,-10}},
		{{2,3,4,-16},{2,1,-20,-15},{2,7,9,-9},{-19,9,-7,-6}},
		{{4,5,2,3},{11,-17,9,3},{-12,-3,5,-3},{18,0,-4,7}},
		{{3,2,-1,-4},{5,1,2,3},{12,3,-4,-2},{9,2,3,-10}},
		{{2,3,4,-16},{2,1,-20,-15},{2,7,9,-9},{-19,9,-7,-6}},
		{{4,5,2,3},{11,-17,9,3},{-12,-3,5,-3},{18,0,-4,7}},
		{{3,2,-1,-4},{5,1,2,3},{12,3,-4,-2},{9,2,3,-10}}};
	for(i=0;i<10;i++){
		for(j=0;j<4;j++){
			for(k=0;k<4;k++){
				if (sayiDizisi[i][j][k]>=0){
					printf("%d \t",sayiDizisi[i][j][k]+5);
				}
				else{
					printf("%d \t",sayiDizisi[i][j][k]*-1);
				}
			}
		printf("\n");}
	printf("\n");}
	
	return 0;
}
