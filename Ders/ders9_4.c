#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int matris[2][3]={};
	int tek[6]={};
	int cift[6]={};
	int i,j;
	int sayac1=0,sayac2=0;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			//RASTGELE OLARAK MATRİSİ BELİRLİYOR VE CİFT OLUP OLMADIGINA BAKIYOR.
			matris[i][j]=1+rand()%8;
			printf("%d ",matris[i][j]);
			if(matris[i][j]%2==0){
				cift[sayac1]=matris[i][j];
				sayac1++;
			}
			else{
				tek[sayac2]=matris[i][j];
				sayac2++;
			}
		}
		printf("\n");
	}
	printf("\nTek degerler: ");
	for(i=0;i<6;i++){
		if(tek[i]!=0){
		printf("%d ",tek[i]);}
	}
	printf("\nCift degerler: ");
	for(i=0;i<6;i++){
		if(cift[i]!=0){
		printf("%d ",cift[i]);}
	}
	
	return 0;
}
