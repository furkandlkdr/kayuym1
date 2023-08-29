#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	printf("Furkan Dulkadir 221030910016\n");
	srand(time(0));
	int notlar[10][3][4];
	int i,j,k,ort;
	for(i=0;i<10;i++){
		printf("***%d. ogrencinin;\n",i+1);
		for(j=0;j<3;j++){
			printf("**%d. ders notlari: ",j+1);
			ort=0;
			for(k=0;k<4;k++){
				notlar[i][j][k]=65+rand()%35;
				printf("%d ",notlar[i][j][k]);
				ort+=notlar[i][j][k];
			}
			printf("\n*ortalamasi: %d\n\n",ort/4);
		}
	}
	return 0;}
