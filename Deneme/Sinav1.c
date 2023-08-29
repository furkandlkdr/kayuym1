#include <stdio.h>
#include <time.h>

int main(){
	srand(time(0));
	int mertebe,i,j,iz=0;
	printf("Olusturmak istediginiz matrisin mertebesini giriniz: ");
	scanf("%d",&mertebe);//Mertebe belirleniyor
	int matris[mertebe][mertebe];//Matris tanýmlanýyor
	for(i=0;i<mertebe;i++){
		for(j=0;j<mertebe;j++){//Ýki boyutlu dizinin elemanlarý randomla atanýyor
			matris[i][j]=1+rand()%9;//%9 dersek 0,1,2..,8 alýr ama +1 derse 1den 9'a kadar alýr.
			printf("%d",matris[i][j]);//Martisin düzgün yazdýrýlmasý için
			if(i==j) iz+=matris[i][j];//Asal köþegenleri belirleyip topluyoruz
		}
		printf("\n");//Düzgün yazdýrýlmasý için
	}
	printf("\n Matrisin izi: %d",iz);

}
