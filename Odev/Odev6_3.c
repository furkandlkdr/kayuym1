#include <stdio.h>
#include <stdlib.h>

int main(){
	int sayi,a,b,c;
	int x;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	c=sayi;
	b=1;
	for(x=0;x<20;x++){
		for(a=0;a<10;a++){
			c=sayi*b;
			printf("%d ", c);
			b++;
		}
		printf("\n");
	}
	
	return 0;
}
