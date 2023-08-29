#include <stdio.h>
#include <stdlib.h>

void tekCift(int sayi);

int main(){
	int sayi;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	tekCift(sayi);
	
	return 0;
}
void tekCift(int sayi){
	if(sayi%2==0){
		printf("Sayiniz cifttir.");
	}
	else printf("Sayiniz tektir. ");
}
