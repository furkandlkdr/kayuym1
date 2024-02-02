#include <iostream>
using namespace std;

int main(){
	int b=0,c=9;
	do{
		if(c<4) break;
		else if(c--<5) continue;
		b++;
	}while(b++<7);
	cout << b << " " << c;
	return 0;
}
//
