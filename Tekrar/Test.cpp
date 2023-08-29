#include <iostream>

using namespace std;

int main()
{
    cout << "Furkan Dulkadir 221030910016" << endl;
    char yas;
    cout << "Lutfen yas giriniz" << endl;
    cin >> yas;
    if (yas>0 && yas<=2){
        cout << "Bebeklik evresi";
    }
    else if(yas<0){
    	cout << "Lutfen gecerli bir yas giriniz! ";
	}
    else if (yas>2 && yas<=13){
        cout << "Cocukluk evresi";
    }
    else if (yas>13 && yas<=21){
        cout << "Ergenlik evresi";
    }
    else if (yas>21 && yas<=33){
        cout << "Genclik evresi";
    }
    else if (yas>33 & yas<=57){
        cout << "Yetiskinlik evresi";
    }
    else{
        cout << "Yaslilik evresi";
    }
    return 0;
}

