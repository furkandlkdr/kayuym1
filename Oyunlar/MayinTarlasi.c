#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Furkan Dulkadir 221030910016
int main(){
	int x,y,i,j,sa,su,toprak=0;
	srand(time(0));
	printf("Lutfen acmak istediginiz mayin tarlasi boyutunu ayri ayri giriniz: ");
	scanf("%d %d",&x,&y);
	int tarla[x][y];
	int besli[x][y];
	printf("Mayin tarlasi ORNEGI= \n");
	for(i=0;i<x;i++){ //ORNEK
		for(j=0;j<y;j++){
			tarla[i][j]=rand()%2;
			printf("%d",tarla[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<x;i++){ //ASIL TARLA
		for(j=0;j<y;j++){
			tarla[i][j]=rand()%2;
			if (tarla[i][j]==0) toprak++;
			besli[i][j]=7;
		}
		printf("\n");
	}
	printf("\n");
	
	do{	
		if(toprak == x*y || toprak == 0){//KAZANMA ÞARTI
			printf("KAZANDINIZ!\n");
			break;}
		for(i=0;i<x;i++){ //GOSTERILECEK TARLA
			for(j=0;j<y;j++){
				printf("%d",besli[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("%d adet toprak kaldi.\nLutfen secmek istediginiz yeri ayri ayri giriniz: ",toprak);
		scanf("%d %d",&sa,&su);
		if(sa>0 && su>0 && sa<=x && su<=y){
			sa=sa-1;
			su=su-1;
			if(tarla[sa][su]==0 && besli[sa][su==7]){
				besli[sa][su]=0;
				toprak--;
			}
			else if(tarla[sa][su]==1 && besli[sa][su]==7){
				besli[sa][su]=1;
				printf("BOOM\n");
				break;
			}
			else{printf("Daha once actiginiz yeri acmaya calistiniz!\n");}
		}
		else{printf("Gecersiz bir index girdiniz!.\n");}
	}while(tarla[sa][su]!=1);
	
	for(i=0;i<x;i++){ //SON HALI
		for(j=0;j<y;j++){
			printf("%d",besli[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("OYUN SONLANDI!");
	return 0;
}
