#include <iostream>
using namespace std;

int main(){
	
	int x, y, tambah, kurang, kali, bagi;
	
	cout << "Masukkan bilangan kesatu = ";
	cin >> x;
	
	cout << "Masukkan bilangan kedua = ";
	cin >> y;
	
	tambah = x+y;
	kurang = x-y;
	kali = x*y;
	bagi = x/y;
	
	cout << "Jadi hasil Penjumlahannya adalah = " << tambah << endl;
	cout << "Jadi hasil Pengurangan adalah = " << kurang << endl;
	cout << "Jadi hasil Kali adalah = " << kali << endl;
	cout << "Jadi hasil bagi adalah = " << bagi << endl;
	
	return 0;
}
