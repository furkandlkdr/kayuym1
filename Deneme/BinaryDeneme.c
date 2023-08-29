#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int sayi,i=0,temp;
	int dizi[50];
	printf("Lutfen binary sistemine cevirilecek sayiyi(1-1024) giriniz: ");
	scanf("%d", &sayi);
	temp=sayi;
	while(temp!=0){
		dizi[i]=temp%2;
		temp=temp/2;
		i++;
	}
	for(i=i-1;i>=0;i--){
		printf("%d",dizi[i]);
	}
	
	
	return 0;
}
