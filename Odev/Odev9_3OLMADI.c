#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int limit,x,y,i,j,a,b,test,sayac=0;
	printf("Lutfen kare matrisin mertebesini belirtin: ");
	scanf("%d",&x);
	limit=x;
	int dizi[x][x];
	y=x*x;
	int yol[y];
	for(i=0;i<x;i++){//Dizi Tanimlandi
		for(j=0;j<x;j++){
			dizi[i][j]=((1+rand()%limit)*10)+(1+rand()%limit);
			printf("%d ",dizi[i][j]);}
		printf("\n");
	}
	printf("Ilk oda: %d\n",dizi[0][0]);
	do{
		printf("Bakmak istediginiz odayi giriniz: ");
		scanf("%d %d",&a,&b);
		printf("odaniz: %d \n",dizi[a-1][b-1]);
		test=(a*10)+b;
		yol[sayac]=test;
		sayac++;
		if(test==dizi[a-1][b-1]){
			printf("Hazineyi buldunuz!");
			break;}
	}while(a!=0 && b!=0 && a<=x && b<=x);
	printf("\nGittiginiz yol: ");
	for(i=0;i<sayac;i++){
		printf("%d ",yol[i]);}
	return 0;
}
