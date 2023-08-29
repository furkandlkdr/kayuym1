#include <stdio.h>
#include <math.h>

int main(){
	int c=0,i,j,k;
	for(i=1;i<=10;i++)
		for(j=i+1;j<=10;j++)
			for(k=j;k<=10;k++)
			c++;
	printf("%d",c);
	return 0;
}
