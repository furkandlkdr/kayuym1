#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int sayi,i=0,temp;
	int dizi[14];
	//minimum 2048'e kadar yani 12 bitlik bir dizi açıyoruz
	printf("Lutfen binary sistemine cevirilecek sayiyi(1-1024) giriniz: ");
	scanf("%d", &sayi);
	//Sayiyi bozmamak icin gecici degiskene atiyoruz
	temp=sayi;
	while(temp!=0){
		dizi[i]=temp%2;
		temp=temp/2;
		i++;
	} //sayimizin boleni sifir olana kadar 2 ye boluyoruz ve kalanı atiyoruz
	//Yukaridaki islem bittiginde i'miz istenilen bit degerinin bir fazlasinda duruyor o nedenle 1 azaltiyoruz
	for(i = i - 1; i >= 0; i--)
		printf("%d",dizi[i]);
	return 0;
}
