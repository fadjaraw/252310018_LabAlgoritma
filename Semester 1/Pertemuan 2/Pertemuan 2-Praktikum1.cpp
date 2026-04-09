#include <iostream> 
using namespace std;
#define harga 4500.02

int main() {
    float jumlah, total; 
    cout << "Masukkan Jumlah Barang = ";
    cin >> jumlah;
    total = harga * jumlah;
    cout << "Harganya adalah " << total;
    return 0;
}
