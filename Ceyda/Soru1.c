#include <stdio.h>
#include <stdlib.h>

int fonk(int sayi){
	int i,toplam=0;
	for(i=1;i<=sayi;i++){
		if(sayi%i==0){
			toplam=toplam+i;
			printf("%d ",i);
		}
	}
	return toplam;
}

int main(){
	int sayi;
	printf("Tam bolenleri hesaplanacak sayiyi giriniz: ");
	scanf("%d",&sayi);
	printf("\nTam bolenlerin toplami: %d", fonk(sayi));
	
	return 0;
}
