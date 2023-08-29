#include <stdio.h>
#include <stdlib.h>
//Kullanýcýdan istenilen sayiyi ay olarak gösteriyor.
int main(){
	char* aylar[12]={"Ocak","Subat","Mart","Nisan","Mayis","Haziran","Temmuz","Agustos","Eylul","Ekim","Kasim","Aralik"};
	int sayi;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	if(sayi<1 || sayi>12){
		printf("Lutfen gecerli bir deger biliniz.");
	}
	printf("Ayiniz: %s",aylar[sayi-1]);
	
	return 0;
}
