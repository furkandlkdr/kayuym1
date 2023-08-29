#include <stdio.h>
#include <stdlib.h>
int ackerman(int,int);
int main(){
	printf("Furkan Dulkadir 221030910016\n");
	printf("Lutfen iki sayi giriniz: ");
	int x,y;
	scanf("%d %d",&x,&y);
	printf("Ackermann fonksiyon sunucu: %d",ackerman(x,y));
	return 0;
}
int ackerman(int m,int n){
	if (m==0) return n+1;
	else if (m>0 && n==0) return ackerman(m-1,1);
	else if (m>0 && n>0) return ackerman(m-1,ackerman(m,n-1));
}
