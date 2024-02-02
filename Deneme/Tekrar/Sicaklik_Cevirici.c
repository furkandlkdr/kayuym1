#include <stdio.h>
#include <math.h>

int main(){
	float sicaklik;
	char birim;
	printf("Lutfen sicakligin sayisal degerini giriniz: ");
	scanf("%f", &sicaklik);
	printf("Lutfen sicakliginizin birimini giriniz: ");
	scanf("%s", &birim);
	if (birim=='c' || birim=='C'){
		float fahrenheit;
		fahrenheit=sicaklik*9/5+32;
		printf("Celcius derecenizin Fahrenheit olarak yazimi: %f", fahrenheit);}
	else if (birim=='f' || birim =='F'){
		float celcius;
		celcius=(sicaklik-32)*5/9;
		printf("Fahrenheit derecenizin Celcius olarak yazimi: %f", celcius);
	}
	else{
		printf("Lutfen c veya f olarak biriminizi belirtin! ");
	}
	return 0;
}
