#include <stdio.h>
#include <stdlib.h>

int main(){
	const int N=6;
	int i,j;
	for(i=0;i<6;i++){
		for(j=0;j<13;j++){
			if(j<N-i||j>N+i){
				printf("*");
			}
			else{
				printf("$");
			}
		}
		printf("\n");
	}
	
	return 0;
}
