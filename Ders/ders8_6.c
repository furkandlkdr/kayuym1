#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//A'nýn elemanlarýný toplayan uygulama(Random fonksiyonu da var).
int main(){
	int N,i,topl=0;
	srand (time(0));
	printf("Dizi boyutunu giriniz: ");
	scanf("%d",N);
	int A[N];
	for(i=0;i<N;i++){
		A[i]=1+rand()%100;
		printf("%d. eleman %d\n",i,A[i]);
		topl+=A[i];
	}
	printf("Toplam= %d",topl);
	return 0;
}
