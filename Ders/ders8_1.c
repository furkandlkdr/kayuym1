#include <stdio.h>
#include <stdlib.h>

int main(){
	char harfler[]={'a','l','i','\o'};
	int i;
	for(i=0;i<5;i++){
		printf("%d. eleman = %c\n",i+1,harfler[i]);
	}
	//normalde �al���yor ama burada �al��mad�!
	
	return 0;
}
