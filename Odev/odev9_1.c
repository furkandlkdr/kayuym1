#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,i,j,sayac=0;
	printf("Lutfen kare matrisin mertebesini belirtin: ");
	scanf("%d",&x);
	int dizi[x][x];
	printf("Matris elemanlarini ayri ayri giriniz; \n");
	for(i=0;i<x;i++)
		for(j=0;j<x;j++)
			scanf("%d",&dizi[i][j]);
	for(i=0;i<x;i++)
		for(j=0;j<x;j++)
			if(i!=j)
				if(dizi[i][j]==dizi[j][i])
					sayac++;
	if(sayac+x==x*x)
		printf("Matrisiniz simetriktir.");
	else
		printf("Matrisiniz simektir degildir.");
	
	
	return 0;
}
