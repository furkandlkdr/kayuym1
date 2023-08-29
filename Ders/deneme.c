#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[5]= {1,3,5,7,9};
	int toplam=0,i;
	for(i=1;i<5;i++){
		if(i%2==0) A[i]+= A[i-1];
		else A[i]-+A[i-1];
		toplam+=A[i];
	}
	printf("%d",toplam);
	return 0;
}
