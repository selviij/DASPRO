#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    string data = "Nama       : Selvi Ijayanti\nNIM        : A11.2022.14139\nKelompok   : A11.4104\n\n";
    int r;
    float luas;
    float pi = 3.14;
    cout << data;
    cout << "Program Operasi Hitung\nLuas Lingkaran \n";
    cout << "Masukkan jari-jari lingkaran : "; cin >> r;
    if (r % 7 == 0) {
    luas=(22*r*r)/7; //pi 22/7
    } else {
    luas=pi*r*r; //pi 3.14
    };
    cout << "Hasil luas lingkaran adalah : " << luas <<endl;

    // Luas Persegi Panjang
    float p,l;
    float luass;
    cout << "\nProgram Operasi Hitung\nLuas Persegi Panjang \n";
    cout << "Masukkan panjang: "; cin >> p;
    cout << "Masukkan lebar: "; cin >> l;
    luass=p*l;
    cout << "Hasil luas persegi panjang \ndengan rumus luas pxl \nadalah : " << luass ;


    return 0;
}
