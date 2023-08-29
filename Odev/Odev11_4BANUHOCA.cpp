#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
int main(){
	printf("Furkan Dulkadir 221030910016\n");
	string rehber[8][2]={{"OYKU","5055057555"},{"FEYZA","5028087585"},{"ENIS","5429089952"},{"EMRE","5409876655"},
	{"BURAK","5075527656"},{"SU","5678889052"},{"MERT","5759900595"},{"AHMET","5878809785"}};
	string aranan;
	printf("Aramak istediginiz kisinin ismini buyuk harfle yaziniz: ");
	cin >> aranan;
	int i,bul=0;
	for(i=0;i<8;i++){
		if(rehber[i][0]==aranan){
			cout << rehber[i][1];
			bul=1;
		}
	}
	if(bul==0){
	cout <<" Aradiginiz kisi rehberde yok!";
	}
	return 0;
}

