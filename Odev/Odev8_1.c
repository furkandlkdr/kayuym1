#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int oylar[5];
	srand (time(0));
	int temp1=0,temp2,sayac;
	for(sayac=0;sayac<5;sayac++){
		oylar[sayac]=1+rand()%100;
		if(oylar[sayac]>temp1){
			temp1=oylar[sayac];
			temp2=sayac;
		}
		printf("%d. adayin oyu: %d\n",sayac+1, oylar[sayac]);
	}
	printf("En cok oyu alan %d. aday ve oy sayisi %d",temp2+1,temp1);
	return 0;
}
