#include <stdio.h>
#include <stdlib.h>
//Anýn tersini Bye tanimlayan uygulama
int main(){
	int A[5]={1,2,3,4,5};
	int B[5];
	int i,j=0;
	for(i=4;i>=0;i--){
		B[i]=A[j];
		j++;
	}
	for(i=0;i<5;i++){
		printf("%d ",B[i]);
	}
	
	return 0;
}
