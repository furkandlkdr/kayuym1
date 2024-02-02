#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int x,y,i,j,test=0,a=0,b=0,c=0,d=0,sayac=0;
	printf("Lutfen kare matrisin mertebesini belirtin: ");
	scanf("%d",&x);
	int dizi[x][x];
	y=x*x;
	int yol[y];//Butun yolun her ihtimalini tutacak dizi
	for(i=0;i<x;i++){//Diziyi tanimlama
		for(j=0;j<x;j++){
			dizi[i][j]=((1+rand()%x)*10)+(1+rand()%x);
			printf("%d ",dizi[i][j]);}
		printf("\n");}
	printf("Ilk oda: %d\n\n",dizi[0][0]);//ilk odayi yazdiriyor
	
	do{
		a=dizi[c][d]/10;
		b=dizi[c][d]%10;
		yol[sayac]=dizi[c][d];
		printf("%d. Hamle: %d%d. oda: %d \n",sayac+1,a,b,dizi[a-1][b-1]);
		sayac++;
		printf("a=%d b=%d c=%d d=%d test= %d \n",a,b,c,d,test);
		if(test==dizi[a-1][b-1]){
			printf("Hazineyi buldunuz!\n");
			break;}
		test=dizi[c][d];
		c=a-1;
		d=b-1;
	}while(sayac<y);
	
	printf("Gittiginiz yol: ");//Son Ekran
	for(i=0;i<sayac;i++){//Yolu yazdiriyorll
		printf("%d ",yol[i]);}
	return 0;
}
