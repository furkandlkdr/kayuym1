#include <stdio.h>
#include "usalma.h"

int main(){
	
	int taban,kuvvet;
	
	printf("Lutfen taban girin: ");
	scanf("%d", &taban);
	printf("Lutfen kuvvet giriniz: ");
	scanf("%d",&kuvvet);
	UsHesapla(taban,kuvvet);
	
}
