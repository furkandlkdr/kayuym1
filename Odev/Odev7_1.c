#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Furkan Dulkadir 221030910016\n");
	int sayi,sayac1,sayac2=0,bol=0,asalmi=0;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	printf("\n");
	for(sayac1=2;sayac1<sayi;sayac1++){
		asalmi=1;
		for(bol=2;bol<sayac1;bol++){
			if(sayac1%bol==0)
				asalmi=0;
		}
		if(asalmi==0)
			printf("%d sayisi asal degildir.\n", sayac1);
		else if(asalmi==1){
			printf("%d sayisi asaldir.\n",sayac1);
			sayac2++;
		}
	}
	printf("\n %d sayisina kadar %d adet asal sayi vardir",sayi,sayac2);
	return 0;
}

