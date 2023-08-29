#include <stdio.h>

int Fib(int n){
	long int a=1,b=1,i,Fibon[100]={1,1};
	for(i=2;i<n;i++){
		Fibon[i]=Fibon[i-1]+Fibon[i-2];
	}
	printf("%d" ,Fibon[n-1]);
}
int main(){
	int sayi;
	printf("Fibonacci dizisinin hangi elemanini istiyorsunuz? ");
	scanf("%d",&sayi);
	Fib(sayi);
	return 0;
}
