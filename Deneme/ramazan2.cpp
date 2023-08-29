#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main() {
	srand(time(0));
    int oylar[5];
    int a;
    int enbuyuk=0;
    for (int j = 0; j < 5; j++){
    	oylar[j] = rand()%1000;
        cout << j+1 <<". aday= " << oylar[j] <<" oy aldi." << "\n";
        if (oylar[j] > enbuyuk){
        	enbuyuk=oylar[j];
			a=j;
        }
	}
	cout<<"Kazanan " << oylar[a] << " oy ile "<< a+1;
    return 0;
}
