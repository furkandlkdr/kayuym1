#include <stdio.h>
#include <stdlib.h>

int main(){
	int dizi[12];
	int x;
	for(x=0;x<12;x++){
		if(x<6){
			dizi[x]=x;
		}
		else{
			dizi[x]=11-x;
		}
		printf("%d",dizi[x]);
	}
	
	return 0;
}
