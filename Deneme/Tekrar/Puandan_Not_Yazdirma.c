#include <stdio.h>
#include <math.h>

int main(){
	int puan;
	printf("Lutfen puaninizi giriniz: ");
	scanf("%d", &puan);
	if (puan<0 || puan>100){
		printf ("Lutfen 0-100 arasi bir deger giriniz");
	}
	else if (puan>=0 && puan<50){
		printf("Notunuzun harf degeri FF");
	}
	else if (puan>=50 && puan<58){
		printf("Notunuzun harf degeri DD");
	}
	else if (puan>=58 && puan<67){
		printf("Notunuzun harf degeri DC");
	}
	else if (puan>=67 && puan<75){
		printf("Notunuzun harf degeri CC");
	}
	else if (puan>=75 && puan<80){
		printf("Notunuzun harf degeri CB");
	}
	else if (puan>=80 && puan<85){
		printf("Notunuzun harf degeri BB");
	}
	else if (puan>=85 && puan<92){
		printf("Notunuzun harf degeri BA");
	}
	else{
		printf("Notunuzun harf degeri AA");
	}
	return 0;
}
