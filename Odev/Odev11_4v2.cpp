#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
int main(){
	printf("Furkan Dulkadir 221030910016\n");
	string rehber[10][2]={{"OYKU","5055057555"},{"FEYZA","5028087585"},{"ENIS","5429089952"},{"EMRE","5409876655"},
	{"BURAK","5075527656"},{"SU","5678889052"},{"MERT","5759900595"},{"AHMET","5878809785"},{"MEHMET","3122500595"},{"FARUK","5059557777"}};
	string aranan;
	cout << "Aramak istediginiz kisinin ismini buyuk harfle yaziniz: ";
	cin >> aranan;
	int i,bul=0;
	for(i=0;i<10;i++){
		if(aranan==rehber[i][0]){
			bul=i;
		}
	}
	if(bul==0) cout << "Aradiginiz kisi rehberinizde yok! ";
	else cout<< rehber[bul][1];
	
	return 0;
}
