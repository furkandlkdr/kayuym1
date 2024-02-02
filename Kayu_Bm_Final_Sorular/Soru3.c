#include <stdio.h>
#include <stdlib.h>

int perfect(int sayi){
	int toplam=0,i;
	printf("Bolenleri: ");
	for(i=1;i<sayi;i++){
		if(sayi%i==0){
			toplam+=i;
			printf("%d ",i);
		}
	}
	if(toplam==sayi) return 1;
	else return 0;
}

int main(){
	int sayi;
	printf("Perfect sayi kontrolu icin bir sayi giriniz: ");
	scanf("%d",&sayi);
	printf("\nPerfectlik degeri: %d",perfect(sayi));
		
	return 0;
}
