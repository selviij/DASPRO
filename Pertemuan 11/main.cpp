#include <iostream>

using namespace std;

int main()
{
    int f1 = 0,f2 = 1,hasil = 0;
    int n = 12;
    cout << "---------------" << endl;
    cout << "Program Fibonacci \n";
    cout << "Selvi Ijayanti \n";
    cout << "---------------" << endl;

    for(int a = 1; a <= n; a++){
        for(int b = 1; b <= a; b++){
            f1 = f2;
            f2 = hasil;
            cout << hasil << " ";
            hasil = f1 + f2;
        }
        f1 = 0;
        f2 = 1;
        hasil = 0;
        cout << "\n";
    }
    return 0;
}
