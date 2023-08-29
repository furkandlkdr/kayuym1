#include <stdio.h>

int main(){
	int r,s,i;
	for(i=0;i<=8;i++){
		s=1;
		r=i+1;
		
		int sut;
		
		for(sut=0;sut<=i;sut++){
			if(sut>0){
				s=s*(r-sut)/sut;}
		printf("%d", s);
		}
		printf("\n");
	}
	return 0;
}
