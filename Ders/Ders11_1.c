#include <stdio.h>
#include <math.h>

int main(){
	/*char ad[30];
	printf("Girilen isim: ");
	gets(ad);
	int uz=strlen(ad);
	printf("%d karakterdir",uz);
	return 0;*/
	
	char ad[30];
	printf("Girilen isim: ");
	gets(ad);
	int uz=0,flag=0,i=0;
	while(flag!=1){
		if(ad[i]!='\0') uz++;
		else {
			flag=1;
			i++;}
	}
	printf("%d karakterlidir", uz);
	return 0;
}
