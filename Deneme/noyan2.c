#include <stdio.h>

int main(){
	int number,a,b,c;
	printf("Please enter a positive integar: ");
	scanf("%d",&number);
	for(a=2;a<=number;a++){
		c=0;
		for(b=1;b<a;b++){
		if(a%b==0){
			c+=b;
			}
		}
		if(c>a){
			printf("%d is abundant number\n",a);
		}
		
		else if(c<=a){
			printf("%d is NOT an abundant number\n",a);
		}
	}
	return 0;
}
