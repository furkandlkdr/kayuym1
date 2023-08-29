#include <stdio.h>
#include <stdlib.h>
#include <math.h>//pow(a,b)=a'nin b ussu, sqrt(a,b)=a'nin b. dereceden karekoku

int turev(int a,int x,int b){
	int sonuc=a*b*pow(x,b-1);
	return sonuc;
}

int main(){
	int a,b,x;
	printf("Turev probleminizi (a*x ussu b olacak sekilde) giriniz: ");
	scanf("%d %d %d",&a,&x,&b);
	printf("%d",turev(a,x,b));
	
	return 0;
}
