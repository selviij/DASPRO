#include <iostream>

using namespace std;

int main()
{
   int j, i, a=0, angka, mins, maks,b=0, sum, d, x, p=0, y,c, n=0;
   float ra, f;

   //Soal no 1
   cout << "-----------" << endl;
   cout << "Soal nomor 1" << endl;
   cout << "-----------" << endl;
   for (j = 100, i = 1; j >= 1 && i <= 100; j--, i++){
    cout << "j = " << j << " dan i = "<< i << endl;
   }

   //Soal no 2
   cout << "\n" << endl;
   cout << "Soal nomor 2" << endl;
   cout << "-----------" << endl;
   for( i = 1; i <= 100; i++){
    if(i % 2 == 1){
        continue;
    }
    cout << "Nilai genap adalah " << i << endl;
   }

   //Soal no 3
   cout << "\n" << endl;
   cout << "Soal nomor 3" << endl;
   cout << "-----------" << endl;
   for(j = 100; j >= 1; j--){
    cout << j << endl;
    if(j == 55){
        break;
    }
   }

   // Soal no 4
   cout << "\n" << endl;
   cout << "Soal nomor 4" << endl;
   cout << "-----------" << endl;
   for(i = 1; i <= 20; i++){
    cout << i << endl;
    a +=i;
    ra = a/i;
   }
   cout << "\nJumlah = " << a << endl;
   cout << "Rata-rata = " << ra << ".00" << endl;

   //Soal no 5
    cout << "\n" << endl;
    cout << "Soal nomor 5" << endl;
    cout << "-----------" << endl;
    cout << "Program ini berhenti jika Anda Menginputkan Angka = -99\n" << endl;
    for(i = 1; i <= 100; i++){
        cout << "Masukan Nilai Anda ";
        cin >> angka;
        if(angka == -99){
            cout << "\nKeluar Karena Break " << endl;
            break;
        }
    }

    //Soal no 6
    cout << "\n" << endl;
    cout << "Soal nomor 6" << endl;
    cout << "-----------" << endl;
    for(j = 1; j <= 100; j++){
        cout << " Masukan Nilai Anda ";
        cin >> angka;
        if(angka == -99){
            break;
        }
        if(j == 1){
            mins = angka;
            maks = angka;
        }else{if(angka > maks){
            maks = angka;
        }if(angka < mins){
            mins = angka;
        }
        }
    }
    cout << endl;
    cout << "Max = " << maks << endl;
    cout << "Min = " << mins << endl;

    //Soal no 7
    cout << "\n" << endl;
    cout << "Soal nomor 7" << endl;
    cout << "-----------" << endl;
    for(j = 1; ; j++){
        cout <<"Masukan Nilai Anda = ";
        cin >> x;
        if(x == 9999){
            break;
        }
        cout << x << endl;
        p = p + x;
    }
    cout << "Jumlah angka = " << p << endl;


    //Soal no 8
    cout << "\n" << endl;
    cout << "Soal nomor 8" << endl;
    cout << "-----------" << endl;
    for(j = 0; ; j++){
        cout << "Maukan Nilai Anda = ";
        cin >> angka;
        if(angka == 9999){
            break;
        }
        cout << angka << endl;
        a += j;
    }
    cout << "Jumlah angka = " << j << endl;


    //Soal no 9
    cout << "\n" << endl;
    cout << "Soal nomor 9" << endl;
    cout << "-----------" << endl;
    for(j = 0; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> y;
    cout << y << endl;
    if(y == 9999) {
        break;
    } else if(y != 9999) {
        n += y;
    }
    b += 1;
    }
    cout << "Jumlah angka = " << n << endl;
    cout << "Jumlah cacah angka = " << b << endl;


    //Soal no 10
    cout << "\n" << endl;
    cout << "Soal nomor 10" << endl;
    cout << "-----------" << endl;
    for(j = 1; j <= 7; j++){

        cout << " Looping yang ke - " << j << endl;
        for(i = 1; i <= 10; i++){
            cout << "-angka " << i << "-" << endl;
        }
    }

    //Soal no 11
    cout << "\n" << endl;
    cout << "Soal nomor 11" << endl;
    cout << "-----------" << endl;
    cout << "Masukan angka = ";
    cin >> angka;
    for(i = 1; i <= 10; i++){
        sum = i*angka;
        cout << i << " x " << angka << " = " << sum << endl;
    }

    //Soal no 12
    cout << "\n" << endl;
    cout << "Soal nomor 12" << endl;
    cout << "-----------" << endl;
    cout << "Celcius    Fahremheit" << endl;
    cout << "-------------------------" << endl;
    for(c = 0; c <= 100; c++) {
    f = ((9.0/5)*c)+32;
    printf("%d \t|\t %.1f |\n",c, f);
    }

    //Soal no 13
    cout << "\n" << endl;
    cout << "Soal nomor 13" << endl;
    cout << "-----------" << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "Celcius \t Fahremheit \t Keterangan" << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    for(c = 100; c >= -45; c--) {
    f = ((9.0/5)*c)+32;
    if(c == 100) {
    printf("%d \t\t %.1f \t\t Air Mendidih \n",c, f);
    } else if(c == 40) {
    printf("%d \t\t %.1f \t\t Air Mandi Panas \n",c, f);
    } else if(c == 37) {
    printf("%d \t\t %.1f \t\t Temperatur Tubuh \n",c, f);
    } else if(c == 30) {
    printf("%d \t\t %.1f \t\t Cuaca Pantai\n",c, f);
    } else if(c == 21) {
    printf("%d \t\t %.1f \t\t Temperatur Ruangan \n",c, f);
    } else if(c == 10) {
    printf("%d \t\t %.1f \t\t Hari Yang Dingin \n",c, f);
    } else if(c == 0) {
    printf("%d \t\t %.1f \t\t Titik Beku Air \n",c, f);
    } else if(c == -18) {
    printf("%d \t\t %.1f \t\t Cuaca Dingin Bersalju \n",c, f);
    } else if(c == -40) {
    printf("%d \t\t %.1f \t\t Cuaca Sangat Dingin Bersalju \n",c, f);
    cout << "------------------------------------------------------------------------------" << endl;
    }
    }

    return 0;
}
