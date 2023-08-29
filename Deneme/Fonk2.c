#include <stdio.h>
#include <math.h>

int UsHesapla(int Xtaban, int Xkuvvet);

int main(){
	
	int taban,kuvvet,sonuc;
	
	printf("Lutfen taban girin: ");
	scanf("%d", &taban);
	printf("Lutfen kuvvet giriniz: ");
	scanf("%d",&kuvvet);
	sonuc = UsHesapla(taban,kuvvet);
	printf("%d uzeri %d = %d \n",taban,kuvvet,sonuc);
	return 0;
}

	int UsHesapla(int Xtaban,int Xkuvvet){
		int Xsonuc = pow(Xtaban,Xkuvvet);
		return Xsonuc;
}
