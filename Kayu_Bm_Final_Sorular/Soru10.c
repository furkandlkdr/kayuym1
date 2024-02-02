#include <stdio.h>
#include <stdlib.h>

void fonk(int sayi1,int sayi2,int *deger){
	*deger=(sayi1+sayi2)/2;
}

int main(){
	int sayi1,sayi2,ortalama=3;
	printf("Lutfen sayi1 i giriniz: ");
	scanf("%d",&sayi1);
	printf("Lutfen sayi2 i giriniz: ");
	scanf("%d",&sayi2);
	fonk(sayi1,sayi2,&ortalama);
	printf("%d",ortalama);
	return 0;
}
