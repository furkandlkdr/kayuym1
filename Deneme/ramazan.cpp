#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int derece,sayi,fkt=1,fkt1;
    float sonToplam=1;

   cout<<"DERECENIZ==";
    cin>>derece;
    cout<<endl;

    cout<<"SAYINIZ==";
    cin>>sayi;
    cout<<endl;
	int us;
	
    for(us=0;us<=derece;us++){
        for(fkt1=1;fkt1<=derece;fkt1++){
        	fkt *=fkt1; //fkt=fkt*fkt1
            sonToplam=sonToplam+pow(derece,us)/fkt;
        }
    }

    cout<<endl;
    cout<<"TOPLAMINIZ=="<<sonToplam;

    return 0;
}
