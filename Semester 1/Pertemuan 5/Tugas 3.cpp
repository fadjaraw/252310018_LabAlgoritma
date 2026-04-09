#include <iostream>
using namespace std;

int main() {
    int angka;
    char ulang;

    do {
        cout << "Masukkan Angka : ";
        cin >> angka;
        
        int hasil = 1;
        int i = 1;
        
        while (i <= angka) {
            hasil *= i;
            i++;
        }

        cout << angka << "! " << "adalah : " << hasil << endl;

        cout << "Apakah ingin menghitung lagi? (Y/N) : ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program Selesai" << endl;

    return 0;
}
