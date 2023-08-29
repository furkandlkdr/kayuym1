#include <stdio.h>

int main(){
	char a[100],b[100];
	printf("Iki kelime giriniz: \n");
	gets(a);
	gets(b);
	int i=0;
	for(;i<20;i++){
		printf("%s \n",a);
	}
	for(i=0;i<20;i++){
		printf("%s \n",b);
	}
	return 0;
}
