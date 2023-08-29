#include <stdio.h>
int main() { 

int i;
int sum=0;
for(i=137;i<9579;i++){
   	if(i%7==0 || i%7==0 || i%13==0){
    	sum=sum+i;}
    printf("Momentary sum: %d\n",sum);
	}
	printf("Sum : %d", sum); 
	return 0;
}
