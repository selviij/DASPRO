#include <iostream>
using namespace std;

int main()
{

    int array[3][2][2];
    int x = 2;
    int sum = 0, bykKel = 0, data = 0;
    cout << "int array[3][2][2] =" << endl;
    cout << "{" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "  {" << endl;
        for (int j = 0; j < 2; j++)
        {
            cout << "   {";
            for (int k = 0; k < 2; k++)
            {
                array[i][j][k] = x;

                cout << array[i][j][k];
                string koma = (k < 1) ? "," : "";
                cout << koma;
                // if (k < 1)
                // {
                //     cout << ",";
                // }
                // else
                // {
                //     cout << "";
                // };
                x += 2;
                if (array[i][j][k] % 4 == 0)
                {
                    bykKel++;
                    sum += array[i][j][k];
                }
            }
            data++;
            string koma = (j < 1) ? "}," : "}";
            cout << koma << endl;
            // cout << "}" << endl;
        }
        string koma = (i < 2) ? "  }," : "  }";
        cout << koma << endl;
        // if (i < 2)
        // {
        //     cout << "  }," << endl;
        // }
        // else
        // {
        //     cout << "  }" << endl;
        // }
    }
    cout << " };";
    cout << endl;
    cout << "Kelipatan 4 ada : " << bykKel << endl;
    cout << "Jumlah Kelipatan 4 Adalah : " << sum << endl;
    cout << "Rata-rata Kelipatan 4 Adalah: " << sum / data << endl;

    return 0;
}