#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int deger,sayac1=0;
	cout<<"Matrisin degerini giriniz: ";
	cin>>deger;
	cout<<"Matrisin elemanlarini giriniz: ";
	int A[deger][deger];
	for(int i=0;i<deger;i++){
		for(int j=0;j<deger;j++){
			cin>>A[i][j];
		}
	}
	for(int i=0;i<deger;i++){
		for(int j=0;j<deger;j++){
			if(A[i][j]==A[i][j]){
				sayac1++;
			}
		}
	}
	if(sayac1==deger*deger){
		cout<<"Matris simetriktir.";
	}
	else cout <<"Matris simetrik degildir";
	
	return 0;
}
