#include <iostream>
using namespace std;

int main(){
    
    int r;
    const float phi = 3.14;
    float hasil;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    hasil = phi * r * r;
    cout << "Luas lingkaran adalah: " << hasil << endl;

    return 0;
}
