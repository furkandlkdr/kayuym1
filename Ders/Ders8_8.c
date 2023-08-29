#include <stdio.h>
#include <stdlib.h>
//Fibanocci dizisini diziye tanimlayan uygulama
int main(){
	int sayi1=1,sayi2=1,i,j,k;
	int Fib[13];
	for(i=0;i<13;i++){
		Fib[i]=sayi1;
		Fib[i+1]=sayi2;
		sayi1+=sayi2;
		sayi2+=sayi1;
		printf("%d ",Fib[i]);
		printf("%d ",Fib[i+1]);
	}
	return 0;
}
