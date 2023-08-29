#include <stdio.h>
#include <stdlib.h>

void cikis(void){
	printf("Cikis yapiliyor...");
}

int main(){
	atexit(cikis);
	printf("Program baslatildi!\n");
	printf("Lutfen 5'ten buyuk bir deger giriniz: ");
	int deger;
	scanf("%d", &deger);
	if (deger<5){
		printf("Uygun olmayan bir deger ile karsilasildi!\n");
		exit (EXIT_FAILURE);
		}
	else{
		printf("Girdiginiz deger caizdir. \n");
	}
	return 0;
}
