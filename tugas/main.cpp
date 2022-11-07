#include <iostream>

using namespace std;

int main()
{
    int harga,uang = 5000;
    cout << "uang Dito: "<<uang<<endl;
    cout << "Harga permen: ";
    cin >> harga;
    if(harga == 500 || harga == 1000){
        cout << "Maka permen yang didapatkan Dito: "<< uang / 1000<< " buah." <<endl;
    }else if(harga == 300){
         cout << "Kelipatan harga permen: ";
        for (int i = harga; i <= uang ; i+=300){
            cout <<i<< " ";
    }
     cout <<endl;
        cout << "Maka permen yang didapatkan oleh Dito: "<< uang / harga<< " buah" <<endl;
    }else{
        cout << "Maaf yang anda inputkan salah" <<endl;
    }
    return 0;
}
