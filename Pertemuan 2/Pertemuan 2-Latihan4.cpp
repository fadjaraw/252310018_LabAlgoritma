#include <iostream> 
using namespace std;

int main() {
    string y;
    char z[35];
    char x[40];
    cout << "Masukkan NPM Anda: ";
    cin >> x;
    cout << "Masukkan Nama Anda: ";
    getline(cin, y);
    cout << "Masukkan Alamat Anda: ";
    cin >> z;
    cout << "NPM Anda adalah: " << x << endl;
    cout << "Nama Anda adalah: " << y << endl;
    cout << "Alamat Anda adalah: " << z << endl;
    return 0;
}
