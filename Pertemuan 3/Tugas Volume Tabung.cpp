#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // deklarasi variabel
    float r, t, volume;
    const float PI = 3.14;
    
    // input jari-jari dan tinggi
    cout << "Menghitung Volume Tabung" << endl;
    cout << "------------------------" << endl;
    cout << "Masukkan jari-jari : ";
    cin >> r;
    cout << "Masukkan tinggi   : ";
    cin >> t;
    
    // menghitung volume tabung
    volume = PI * pow(r, 2) * t; // pow(r,2) artinya r pangkat 2 atau bisa menggunakan r * r juga
    
    // menampilkan hasil
    cout << "Volume tabung adalah : " << volume << endl;

    return 0;
}
