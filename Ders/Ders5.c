#include <stdio.h>

int main(){
	int a;
	do{
		printf("Lutfen bir sayi giriniz: ");
		scanf("%d", &a);
		if (a<10) break;
		printf("Sayiniz: %d\n", a);
	}
	while(a>=10);
		printf("Donguden cikildi.");
	return 0;
	
}
