#include <stdio.h>
#include <stdlib.h>

int main(){
	int maks,sayi1,sayi2;
	printf("Sayi giriniz: ");
	scanf("%d", &maks);
	for(sayi1=1;sayi1<=maks;sayi1++){
		int kare;
		kare=sayi1*sayi1;
		printf("%d\n", kare);
		
	}
	
	
	return 0;
}
