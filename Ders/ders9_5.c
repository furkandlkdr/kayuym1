#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int x,y,i,j,sa,su,bomba=0;
	srand(time(0));
	printf("Lutfen acmak istediginiz mayin tarlasi boyutunu giriniz: ");
	scanf("%d %d",&x,&y);
	int tarla[x][y];
	int besli[x][y];
	printf("Ornek= \n");
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
			if (tarla[i][j]==1) bomba++;
			besli[i][j]=7;
		}
		printf("\n");
	}
	printf("\n\n");
	
	do{	
		if(bomba==0){//KAZANMA ÞARTI
			printf("KAZANDINIZ!");
			break;}
		for(i=0;i<x;i++){ //GOSTERILECEK TARLA
			for(j=0;j<y;j++){
				printf("%d",besli[i][j]);
			}
			printf("\n");
		}
		printf("%d adet bomba kaldi.\nLutfen secmek istediginiz yeri seciniz: ",bomba);
		scanf("%d %d",&sa,&su);
		if(sa>0 && su>0 && sa<=x && su<=y){
			sa=sa-1;
			su=su-1;
			if(tarla[sa][su]==0 && besli[sa][su==7]){
				besli[sa][su]=0;
				bomba--;
			}
			else if(tarla[sa][su]==1 && besli[sa][su]==7){
				break;
			}
			else{printf("Daha once actiginiz yeri acmaya calistiniz!\n");}
		}
		else{printf("Gecersiz bir index girdiniz!.\n");}
	}while(tarla[sa][su]!=1);
	besli[sa][su]=1;
	
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
