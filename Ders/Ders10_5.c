#include <stdio.h>
#include <stdlib.h>

long int fakt(int);

int main(){
	int sayi;
	printf("Faktoriyeli alinacak sayi: ");
	scanf("%d",&sayi);
	printf("%ld",fakt(sayi));
	return 0;

}
long int fakt(int sayi){
	if(sayi<=1) return sayi;
	else return(sayi*fakt(sayi-1));}
	
	return 0;
}
