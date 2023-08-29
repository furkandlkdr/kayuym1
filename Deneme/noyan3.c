#include <stdio.h> 
#include <stdlib.h>
void fillsquare (char symbol, int s){
	int i,j;
	for(j=1;j<=s; j++){
		for (i=1;i<=s;i++){
			printf ("%c", symbol);
		}
		printf("\n");
	}
}
	int main(void) {
		char symbol;
		printf("enter a symbol for square:");
		scanf ("%c", &symbol);
		int s;
		printf("enter an integer for sides of square:");
		scanf("%d",&s);
		fillsquare (symbol, s);
		return 0;
	}
