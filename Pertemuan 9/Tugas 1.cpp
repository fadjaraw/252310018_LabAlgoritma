#include <iostream>
using namespace std;

int main() 
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    char Penjumlahan;

    cout << "Masukkan jumlah baris (1 - 100): ";
    cin >> r;

    cout << "Masukkan jumlah kolom (1 - 100): ";
    cin >> c;

    cout << "Pilih Operasi [ * | / | + | - ] ";
    cin >> Penjumlahan;

    cout <<endl << "Masukkan elemen matriks pertama:" << endl;
    for (i = 0; i < r; ++i) 
	{
        for (j = 0; j < c; ++j) 
		{
            cout << "Matriks a[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> a[i][j];
        }
    }

    cout <<endl << "Masukkan matriks kedua:" << endl;
    for (i = 0; i < r; ++i) 
	{
        for (j = 0; j < c; ++j) 
		{
            cout << "Matriks b[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> b[i][j];
        }
    }
 
    for (i = 0; i < r; ++i) 
	{
        for (j = 0; j < c; ++j) 
		{
            if (Penjumlahan == '*')
                sum[i][j] = a[i][j] * b[i][j];
            else if (Penjumlahan == '/')
                sum[i][j] = a[i][j] / b[i][j];
            else if (Penjumlahan == '+')
                sum[i][j] = a[i][j] + b[i][j];
            else if (Penjumlahan == '-')
                sum[i][j] = a[i][j] - b[i][j];
        }
    }

    cout <<endl << "Hasil Matriks: " << endl;
    for (i = 0; i < r; ++i) 
	{
        for (j = 0; j < c; ++j) 
		{
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
