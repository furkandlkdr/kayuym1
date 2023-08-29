#include <stdio.h>
#include <stdlib.h>

int main(){
	int dizi[5];
	int i;
	for(i=0;i<5;i++){
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d", &dizi[i]);
		printf("%d. sayi %d\n",i+1,dizi[i]);
	}
	
	return 0;
}
