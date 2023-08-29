#include <iostream>
#include <math.h>
using namespace std;

int main(){	
	int a;
	do{
		cout << "Bir sayi giriniz. (Cikis icin 0 giriniz.): \n";
		cin >> a;
		if(a==0) break;
		cout << "Karesi= " << a*a << endl;
	}
	while(a!=0);
		cout<< "Donguden Cikildi: ";
	return 0;
}
