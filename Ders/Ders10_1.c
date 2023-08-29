#include <stdio.h>
#include <stdlib.h>

void *toplamaYap(int deger1,int deger2){
	int sonuc;
	sonuc=deger1+deger2;
	return sonuc;
}

int main(){

	int sayi1=2,sayi2=4;
	printf("%d+%d= %d",sayi1,sayi2,toplamaYap(sayi1,sayi2));
		
	return 0;
}
