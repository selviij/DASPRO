#include <iostream>

using namespace std;

int main()
{
    int harga,uang = 5000;
    cout << "Harga permen: ";
    cin >> harga;
    if(harga == 500 || harga == 1000){
        cout << "Maka permen yang didapatkan: "<< uang / 1000<< " buah." <<endl;
    }else{
        cout << "Kelipatan harga permen: ";
        for (int i = harga; i <= uang ; i+=300){
            cout <<i<< " ";
        }
        cout <<endl;
        cout << "Maka permen yang didapat: "<< uang / harga<< " buah" <<endl;
    }
    return 0;
}
