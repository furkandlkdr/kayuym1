#include <iostream>
using namespace std;
 
int main(){
 	int i,n, fakt=1;
 	cout << "Faktoriyeli alinacak sayi: ";
 	cin >> n;
 	for(i=n;i>=1;i--){
 		fakt=fakt*i;
	}
	cout << n << "! =" << fakt;
	return 0;
}
