#include <stdio.h>
#include <stdlib.h>

int main(){
	srand(time(0));
	int i,array[10],search,found=0;
	int *pointer;
	for(i=0;i<10;i++){
		array[i]=1+rand()%100;
		printf("%d ",array[i]);
	}
	printf("\nGive an integer between 1 and 100 to be searched: ");
	scanf("%d", &search);
	pointer=&search;
	for(i=0;i<10;i++){
		if(*pointer==array[i]){
			found=1;
			break;
		}
	}
	if(found==1) printf("Your number is found at index number %d",i);
	else printf("Your number is not found in the array.");
	
	return 0;
}
