#include <stdio.h>
#include <stdlib.h>

int main(){
	int sayi,asalmi,i,tane=0,k;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	for(i=2;i<sayi;i++){
		asalmi=1;
		for(k=2;k<i;k++){
			if(i%k==0){
				asalmi=0;
			}
		}
		if(asalmi==0) printf("%d sayisi asal degildir\n",i);
		else if(asalmi==1){
			printf("%d sayisi asaldir\n",i);
			tane++;
		}
	}
	printf("%d sayiye kadar %d asal sayi var",sayi,tane);
	
	return 0;
}
