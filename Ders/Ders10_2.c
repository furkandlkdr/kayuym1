#include <stdio.h>
#include <stdlib.h>

void deneme(){
	int sayi;
	for(sayi=1;sayi<=100;sayi++){
		if (sayi%15==0) printf("FizzBuzz \n");
		else if(sayi%5==0) printf("Buzz \n");
		else if(sayi%3==0) printf("Fizz \n");
		else printf("%d \n",sayi);}
}

int main(){
	deneme();
	return 0;
}
