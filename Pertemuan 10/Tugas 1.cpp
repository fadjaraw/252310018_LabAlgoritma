#include<iostream>
using namespace std;

int huruf()
{
	string kalimat;
    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);
    return kalimat.length();
}

int main(){
    int hasil = huruf();
    cout << "Jumlah hurufnya adalah : " << hasil << endl;
    return 0;
}
