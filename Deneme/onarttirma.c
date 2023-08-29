#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=3,b=4,c=5,d=5;
	
	if(a>2){
		a--;
		b=a*b;
	}
	printf("%d, %d", a,b);
	
	return 0;
}
