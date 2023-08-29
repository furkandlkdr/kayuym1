#include <stdio.h>

int main(){
	int dersNotlari[7][4];
	int i,j,k,a;
	for(i=0;i<7;i++){
		k=0;
		for(j=0;j<4;j++){
			printf("Lutfen %d. dersinizin %d. notunu giriniz: ",i+1,j+1);
			scanf("%d",&dersNotlari[i][j]);
			if(dersNotlari[i][j]>100 || dersNotlari[i][j]<0) goto bitirme;
			k=k+dersNotlari[i][j];
		}
		a=k/4;
		if(a>=45){
			printf("%d. dersinizden gectiniz!\n",i+1);
		}
		else{
			printf("%d. dersinizden kaldiniz!\n",i+1);
		}
	}
	bitirme: printf("0-100 arasi bir deger girmelisiniz!");
	
	return 0;
}
