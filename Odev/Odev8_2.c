#include <stdio.h>
#include <stdlib.h>
int main(){
	int bank[7]={200,100,50,20,10,5,1};
	int para,sayac,a;
	printf("Lutfen para miktarini giriniz: ");
	scanf("%d",&para);
	for(sayac=0;sayac<7;sayac++){
		if (para>bank[sayac]){
			a=para/bank[sayac];
			para=para-a*bank[sayac];
			printf("%d adet %d banknot vermelisiniz. \n",a,bank[sayac]);
		}
	}
	return 0;
	
}
