#include <stdio.h>
#include <stdlib.h>
//Fibanocci dizisini diziye tanimlayan uygulama
int main(){
	int F[13];
	F[0]=1;
	F[1]=1;
	int i;
	for(i=2;i<13;i++){
		F[i]=F[i-1]+F[i-2];
	}
	printf("Fibonacci Dizisi: ");
	for(i=0;i<13;i++){
		printf(" %d",F[i]);
	}
	return 0;
}
