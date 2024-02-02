#include <stdio.h>

int main(){
	int sayiDizisi[12]={23,21,10,5,4,24,10,15,18,9,6,3};
	int i,j,k=0;
	//En manuel arama bicimi ile dizideki tekrar sayisina bakiyoruz
	//Bunun cok daha efektif yolları var
	for(i=0;i<12;i++){
		for(j=0;j<12 && j!=i;j++){
			if(sayiDizisi[i]==sayiDizisi[j]){
				printf("%d. eleman ve %d. eleman aynidir ve dizide %d kez tekrar vardir.\n",i+1,j+1,k+1);
				k++;
			}
		}
	}
	return 0;
}
