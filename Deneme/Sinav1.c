#include <stdio.h>
#include <time.h>

int main(){
	srand(time(0));
	int mertebe,i,j,iz=0;
	printf("Olusturmak istediginiz matrisin mertebesini giriniz: ");
	scanf("%d",&mertebe);//Mertebe belirleniyor
	int matris[mertebe][mertebe];//Matris tan�mlan�yor
	for(i=0;i<mertebe;i++){
		for(j=0;j<mertebe;j++){//�ki boyutlu dizinin elemanlar� randomla atan�yor
			matris[i][j]=1+rand()%9;//%9 dersek 0,1,2..,8 al�r ama +1 derse 1den 9'a kadar al�r.
			printf("%d",matris[i][j]);//Martisin d�zg�n yazd�r�lmas� i�in
			if(i==j) iz+=matris[i][j];//Asal k��egenleri belirleyip topluyoruz
		}
		printf("\n");//D�zg�n yazd�r�lmas� i�in
	}
	printf("\n Matrisin izi: %d",iz);

}
